#include<stdio.h>
int main()
{

    char alphabet;
    printf("Enter any Alphabet : ");
    scanf("%c",&alphabet);
  switch(alphabet)
  {
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
        printf("%c is Vowel.\n",alphabet);
          break;
      default:
          printf("%c is consonant.\n",alphabet);
  }
}
