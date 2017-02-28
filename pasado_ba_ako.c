#include <stdio.h> 
#include <string.h>
struct detail{
	char cor[10];
	float gpa;
};

struct student{  
	char name[30];
	struct detail info;
}; 

void displayMenu(){
	printf("0 - Exit\n");
	printf("1 - Write to file\n");
	printf("2 - Read file\n");
	printf("3 - Display Passed\n");
	printf("4 - Display Failed\n");
	printf("5 - Display Invalid\n");
}

void writeToFile(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
	printf("Enter student name: ");
	scanf("%s", &stud.name);
	printf("Enter student Course: ");
	scanf("%s", &stud.info.cor);
	printf("Enter student GPA: ");
	scanf("%f", &stud.info.gpa);
	printf("%s %s %.2f\n", stud.name, stud.info.cor, stud.info.gpa);
	fprintf(myFile, "%s %s %.2f\n", stud.name, stud.info.cor, stud.info.gpa);	
	fclose(myFile);
}

void readFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
    	
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.cor, &stud.info.gpa);
		printf("%s %s %f\n", stud.name, stud.info.cor, stud.info.gpa);
	}
	fclose(myFile);
}

void readpassedFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.cor, &stud.info.gpa);
		if(stud.info.gpa>=75 && stud.info.gpa<=100){
			printf("%s %s %.2f 'Passed'\n", stud.name, stud.info.cor, stud.info.gpa);
		}
	}
}

void readfailedFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.cor, &stud.info.gpa);
		if(stud.info.gpa<=74 && stud.info.gpa>0){
			printf("%s %s %.2f 'Failed'\n", stud.name, stud.info.cor, stud.info.gpa);
		}
	}
}

void readinvalidFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.cor, &stud.info.gpa);
		if(stud.info.gpa<0 || stud.info.gpa>100){
			printf("%s %s %.2f 'Invalid'\n", stud.name, stud.info.cor, stud.info.gpa);
		}
	}
}

int main (){	
    int choice = 1;
    
    displayMenu();
    scanf("%d", &choice);
    while(choice != 0){
    	switch(choice){
    		case 0: 
    			exit(1);
    			break;
    		case 1: 
    			writeToFile();
    			break;
    		case 2: 
    			readFromFile();
    			break;
    		case 3: 
    			readpassedFromFile();
    			break;
    		case 4: 
    			readfailedFromFile();
    			break;
    		case 5: 
    			readinvalidFromFile();
    			break;
		}
		displayMenu();
    	scanf("%d", &choice);
	}    
} 
