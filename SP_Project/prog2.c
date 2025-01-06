#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _AAAAAAAA, _BBBBBBBB, _CCCCCCCC;
   printf("Enter _AAAAAAAA:");
   scanf("%hd", &_AAAAAAAA);
   printf("Enter _BBBBBBBB:");
   scanf("%hd", &_BBBBBBBB);
   printf("Enter _CCCCCCCC:");
   scanf("%hd", &_CCCCCCCC);
   if ((_AAAAAAAA > _BBBBBBBB))
   {
   if ((_AAAAAAAA > _CCCCCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _CCCCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", _AAAAAAAA);
   goto Outofif;
   }
   }
   if ((_BBBBBBBB < _CCCCCCCC))
   {
   printf("%d\n", _CCCCCCCC);
   }
   else
   {
   printf("%d\n", _BBBBBBBB);
   }
Outofif:
   if (((_AAAAAAAA == _BBBBBBBB) && (_AAAAAAAA == _CCCCCCCC) && (_BBBBBBBB == _CCCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_AAAAAAAA < 0) || (_BBBBBBBB < 0) || (_CCCCCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_AAAAAAAA < (_BBBBBBBB + _CCCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
