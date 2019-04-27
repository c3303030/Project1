
#include <stdio.h> // fgit,stdin taking plain text
#include <stdlib.h>
#include<string.h>
/* Ceaser/ rotational cipher
                                 encript:    Encrypt This ZZZ
Takes plain test and produces cipher text using key (shift =5 ):  jshnpuyymnxeee
                  key= 5                  
                  
        Theory: a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10, l=11, 
                key = 5;
                ((int)letter + key ) mod by 26  ==> return ciper text/letter as number.                                                                             // so e= 4 +  5 (key) = 9 mod 26= 9, so letter E gives ciper value of 9
                                                ==> (char)ciphertext = 'letter'         // take cipher letter and make a character which gives 'some letter'.                           // ciper value as a char gives j
                                                
                           ASCII 'a'= 97, 'b'=98, 'c'= 99, 'd'=100, 'e'=101, 'f'=102, 'g'=103, 'h'=104, 'i'=105, 'j'= 106, 'k'=107.....              // just subtract 97 from each to make them equal to above values.     
                                            
   */

// Function ceiser ciper definition
    void caesarCipher(char* plainText, int key);                       // dont return plain textinput (void)
    
    int main(void){
        
        int key= 1;
        char plainText[101];            // string called plain text
        
        printf("Enter plain text to encrypt: ");
        
        // take input and store it in plain text variable using from fgets
        fgets(plainText, sizeof (plainText), stdin);    //  give plain text in variable 'plainText'd                    //fget reads string of text with spaces. while scanf cannnot scan in a whole string
        
        //print ciper text
            printf("ciper text is: ");
            
            
        caesarCipher(plainText, key);       
            
           return 0; 
    } 
       
        
       void  caesarCipher(char* plainText, int key){                    // within this function cipertext is printed
            int i= 0;               // index variable called i
            int cipherValue;
            char cipher;
             // through every single plain text character                    
            while(plainText[i] != '\0' && strlen(plainText)-1 > i){ 
                cipherValue = ((int)plainText[i] - 97 + key)  %  26 + 97;    // current letter would be palin text at position 'i'       // - 97 because eg a start at 97 and need to be 0 for roatation to work
                cipher = (char)(cipherValue);                       // char of cipher text    -->char)ciphertext = 'letter' 
                
                printf("%c", cipher);
                i++;
            
            }
            printf("\n");
      
    
} 



