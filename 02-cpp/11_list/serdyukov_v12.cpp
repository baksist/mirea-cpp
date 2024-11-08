//72 mod 12 == 0 => variant 12
//does not support cyrillic symbols 
//(size of char - 1 byte; size of UTF-8 characters - 2 bytes)

#include "iostream"
#include <stdlib.h>

using namespace std;

struct list
{
	struct list* prv;
	char val;
	struct list* nxt;
};

typedef struct list list;

list* init_list(char c);
list* add_to_list(list* lst, char c);
void find_and_replace(list* lst, char f, char r);
void print_list(list* lst);

int main()
{
	char t;
	list* res;
	char flag;

	printf("Enter first element: \n");
	cin >> t;
	res = init_list(t);
	
	for(;;)
	{
		do
		{
			cout << "Add new element (y/n)? ";
			cin >> flag;
		}while(!(flag == 'y' || flag == 'n'));
	
		if (flag == 'n')
				break;
		
		cout << "Enter new element:" << endl;
		cin >> t;
		res = add_to_list(res, t);
	}

	
	res = res->nxt;
	cout << "Entered list:" << endl;
	print_list(res);
	cout << endl;

	char search, replace; 
	cout << "Enter symbol to find and replace: ";
	cin >> search;
	cout << "Replace '" << search << "' with: ";
	cin >> replace;
	find_and_replace(res, search, replace);
	cout << "Modified list:" << endl;
	print_list(res);
	cout << endl;
	
	return 0;
}

list* init_list(char c)
{
	list* lst;
	lst = (list*)malloc(sizeof(list));
	
	lst->val = c;
	lst->prv = lst;
	lst->nxt = lst;
	
	return lst;
}

list* add_to_list(list* lst, char c)
{
	list* tmp;
	list* save;
	
	tmp = (list*)malloc(sizeof(list));
	save = lst->nxt;
	lst->nxt = tmp;
	
	tmp->val = c;
	tmp->nxt = save;
	tmp->prv = lst;
	
	save->prv = tmp;
	return tmp;
}

void find_and_replace(list* lst, char f, char r)
{
	list* current;
	current = lst;
	do
	{
		if(current->val == f)
			current->val = r;
		current = current->nxt;
	}while(current != lst);
}

void print_list(list* lst)
{
	list* current;
	current = lst;
	do
	{
		cout << current->val << ' ';
		current = current->nxt;
	}while(current != lst);
}
