#include <stdio.h>
#include <string.h>
#define N 1024
void inverse(const char *s, char *invs); 
int count_words(const char *s);
int main(void){
   char text[N+1];
   char inversetext[N+1];
   printf("Please enter text:" ); 
   scanf("%1024[^\n]",text);
   inverse(text, inversetext); 
   printf("Inverse text:%s \n ",inversetext); 
   printf("words:%d \n",count_words(text));
}
void inverse(const char *s, char *invs){ 
   for (size_t i = 0; i < strlen(s); i++) 
 invs[i] = s[strlen(s) - i - 1];

invs[strlen(s)] = '\0';

} 

int count_words(const char *s){ 
   int count = 0;
   char *spaces = strtok((char *) s, " \t\n\r\f\v"); // initialize token with the first word
   while (spaces != NULL){
          count++;
          spaces = strtok(NULL, " \t\n\r\f\v"); // get next word 
          }
return count;
}
