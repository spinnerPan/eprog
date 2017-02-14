#include <stdio.h>
#include<math.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i;
    double j;
    int numberArray[2];

    for (i = 0; i < 2; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    j=numberArray[0]+numberArray[1];
    printf("%f", sqrt(j) );

}
