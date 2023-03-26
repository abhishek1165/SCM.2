#include <stdio.h>
int main(){
    int r,notes_500,notes_100,notes_200,notes_1;
    printf("enter amount:\n");
    scanf("%d",&r);
    notes_500=r/500;
    notes_200=r%500/200;
    notes_100=r%500%200/100;
    notes_1=r%500%200%100;
    printf("number of 500 notes=%d\n",notes_500);
    printf("number of 200 notes=%d\n",notes_200);
    printf("number of 100 notes=%d\n",notes_100);
    printf("number of 1 notes=%d\n",notes_1);
    return 0;
}
