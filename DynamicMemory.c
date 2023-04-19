#include <stdio.h>
#include <stdlib.h>

int main(){

    int index = 0, i = 0, n, *marks;
    int ans;

    marks = (int*)malloc(sizeof(int));

    if(marks == NULL){
        printf("memory can't be allocated");
    }

    else{
        printf("Memory has been successfully allocated by using malloc\n");
        printf("\n marks = %pc\n", marks);

        do {
            printf("\n Enter Marks\n");
            scanf("%d", &marks[index]);
            printf("would you like to add more(1/0):");
            scanf("%d", &ans);

            if(ans == 1){
                index++;
                marks = (int*)realloc(marks, (index+1)*sizeof(int));
                if(marks == NULL){
                    printf("memory can't be allocated");
                }
                else{
                    printf("memory has been successfully reallocated using realloc:\n");
                    printf("\n base address of marks are:%pc", marks);

                }
            }
        }
            while(ans==1);
                for(i=0; i<=index; i++){
                    printf("marks of students %d are: %d\n", i, marks[i]);
                }
            free(marks);
        }

    return 0;
}