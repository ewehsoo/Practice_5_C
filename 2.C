#include <stdio.h>
#include <string.h>

int main() {
 char word[] = "freedom";
 char result[4]; 
 int start = 0; 
 int end = 4;   

 int j = 0; 
 for (int i = start; i < end; i++) {
    result[j] = word[i];
    j++;
    }
    
 result[j] = '\0'; 
 
 printf("Результат: %s\n", result);

return 0;
}
