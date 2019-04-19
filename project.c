#include <stdio.h>

int main() {
    
    char input[100];   //determines amount of memery allocated to char input
    char enc[100];
    int temp;
    scanf("%[^\n]s", input);    //open terminal and type in ./a.out to type in code, the "[^\n}" allow the 
    
    printf("Message: %s\n", input);    // words the consil will encrypt for our message/ sentence.
    
    int key = 5; // difference between char vs encrypted number 
    for (int i=0; input[i]!='\0'; i++)
    
    {
    
    

    if ((65<input[i]<90)   &&  (97<input[i]<122))
    {
         if (input[i]>=65 && input[i]<=90)
         {
           temp = input[i];                     // temp stores values.
           temp = temp - 65;
           temp = temp + key;
           temp = temp%26;
           temp = temp + 65l
           enc[i] = temp;
       }

       
    }
    

else
{
    enc[1]  = input[1];
}


}
   

