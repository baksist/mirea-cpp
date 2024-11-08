#include "stdio.h"
int main(void){
	char cpu1[12], cpu2[8], cpu3[12];
	char t1, t2, t3;
	int freq1, freq2, freq3, ram1, ram2, ram3;
	printf("Enter(1): CPU, frequency, RAM, type\n");  //Pentium-III 233 233 C
	scanf("%s %d %d %c",cpu1,&freq1,&ram1,&t1);
	printf("Enter(2): CPU, frequency, RAM, type\n");  //AMD-K6 166 512 C
	scanf("%s %d %d %c",cpu2,&freq2,&ram2,&t2);
	printf("Enter(3): CPU, frequency, RAM, type\n");  //PowerPC-620 2000 1024 R
	scanf("%s %d %d %c",cpu3,&freq3,&ram3,&t3);
	printf("-------------------------------------------\n");
    printf("|PC Specs                                 |\n");  	
	printf("|-----------------------------------------|\n");
	printf("|CPU        |Frequency (Mgz)|Ram (MB)|Type|\n");
	printf("|-----------|---------------|--------|----|\n");
	printf("|%11s|%15d|%8d|%c   |\n",cpu1,freq1,ram1,t1);
	printf("|-----------|---------------|--------|----|\n");	
	printf("|%11s|%15d|%8d|%c   |\n",cpu2,freq2,ram2,t2);
	printf("|-----------|---------------|--------|----|\n");
	printf("|%11s|%15d|%8d|%c   |\n",cpu3,freq3,ram3,t3);
	printf("|-----------|---------------|--------|----|\n");
	printf("|Type: C-CISC-processor, R-RISC-processor |\n");
	printf("-------------------------------------------\n");
}

