#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _AAAAAAAA, _BBBBBBBB, _XXXXXXXX, _YYYYYYYY;
   printf("Enter _AAAAAAAA:");
   scanf("%hd", &_AAAAAAAA);
   printf("Enter _BBBBBBBB:");
   scanf("%hd", &_BBBBBBBB);
   printf("%d\n", _AAAAAAAA + _BBBBBBBB);
   printf("%d\n", _AAAAAAAA - _BBBBBBBB);
   printf("%d\n", _AAAAAAAA * _BBBBBBBB);
   printf("%d\n", _AAAAAAAA / _BBBBBBBB);
   printf("%d\n", _AAAAAAAA % _BBBBBBBB);
   _XXXXXXXX = (_AAAAAAAA - _BBBBBBBB) * 10 + (_AAAAAAAA + _BBBBBBBB) / 10;
   _YYYYYYYY = _XXXXXXXX + (_XXXXXXXX % 10);
   printf("%d\n", _XXXXXXXX);
   printf("%d\n", _YYYYYYYY);
   system("pause");
    return 0;
}
