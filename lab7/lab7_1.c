#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("mời bạn nhập ký tự bất kỳ ");
    gets(name);
    int i = 0;
    int vowels = 0;   
    int consonants = 0;
    while(name[i++] != '\0'){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            vowels++;
        }else{
            consonants++;
        }
    }
    printf("từ %s có %d nguyên âm và %d phụ âm",name,vowels,consonants);
    return 0;
}