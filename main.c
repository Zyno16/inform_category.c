#include <stdio.h>
#include <stdlib.h>

int main()
{int x;
    printf("Enter your age?:");
           scanf("%d",&x);
           if (x>=6&&x<=7)printf("entry level");
           else if(x>=8&&x<=9){
           printf("primary school");}
           else if(x>=10&&x<=12){
            printf("secondary school");
            }
           else if(x>12) {
                printf("college");
           }
           else printf("you to young for education");




    return 0;
}
