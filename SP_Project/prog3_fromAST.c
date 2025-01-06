#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _AAAAAAAA;
   int16_t _AAAAAAA2;
   int16_t _BBBBBBBB;
   int16_t _XXXXXXXX;
   int16_t _CCCCCCC1;
   int16_t _CCCCCCC2;
   printf("Enter _AAAAAAAA:");
   scanf("%hd", &_AAAAAAAA);
   printf("Enter _BBBBBBBB:");
   scanf("%hd", &_BBBBBBBB);
   for (int16_t _AAAAAAA2 = _AAAAAAAA; _AAAAAAA2 <= _BBBBBBBB; _AAAAAAA2++)
   printf("%d\n", (_AAAAAAA2 * _AAAAAAA2));
   for (int16_t _AAAAAAA2 = _BBBBBBBB; _AAAAAAA2 <= _AAAAAAAA; _AAAAAAA2++)
   printf("%d\n", (_AAAAAAA2 * _AAAAAAA2));
   _XXXXXXXX = 0;
   _CCCCCCC1 = 0;
   while (_CCCCCCC1 < _AAAAAAAA)
   {
   {
   _CCCCCCC2 = 0;
   while (_CCCCCCC2 < _BBBBBBBB)
   {
   {
   _XXXXXXXX = (_XXXXXXXX + 1);
   _CCCCCCC2 = (_CCCCCCC2 + 1);
   }
   }
   _CCCCCCC1 = (_CCCCCCC1 + 1);
   }
   }
   printf("%d\n", _XXXXXXXX);
   _XXXXXXXX = 0;
   _CCCCCCC1 = 1;
   do
   {
   _CCCCCCC2 = 1;
   do
   {
   _XXXXXXXX = (_XXXXXXXX + 1);
   _CCCCCCC2 = (_CCCCCCC2 + 1);
   }
   while (!(_CCCCCCC2 > _BBBBBBBB));
   _CCCCCCC1 = (_CCCCCCC1 + 1);
   }
   while (!(_CCCCCCC1 > _AAAAAAAA));
   printf("%d\n", _XXXXXXXX);
   system("pause");
    return 0;
}
