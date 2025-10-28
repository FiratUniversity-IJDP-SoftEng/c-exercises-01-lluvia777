 
 include <stdio.h>
#include <ctype.h>
#include <string.h> 
#include <math.h>

int main() {
    
    int harf_sayisi = 0;
    int bosluk_sayisi = 0;
    int cumle_sayisi = 0;
    
    char text[1000];
    
    printf("Text: ");
    fgets(text, 1000, stdin); 

    int uzunluk = strlen(text);

    for (int i = 0; i < uzunluk; i++)
    {
    if (isalpha(text[i])) {
        harf_sayisi++;
    }
        
        if (text[i] == ' ') {
            bosluk_sayisi++;
        }
        
    if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
        cumle_sayisi++;
    }
    } 
    
    int kelime_sayisi = bosluk_sayisi + 1;
    
    float L = ((float)harf_sayisi / (float)kelime_sayisi) * 100;
    float S = ((float)cumle_sayisi / (float)kelime_sayisi) * 100;
    
    float index = 0.0588 * L - 0.296 * S - 15.8;
    
    int grade = round(index);
    
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
    
    return 0;
}