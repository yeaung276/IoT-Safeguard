
# 1 "itoa.c"

# 26
void itoa(unsigned int val, char* str )
{

str[0]=(val/1000)+0x30;
str[1]=((val%1000)/100)+0x30;
str[2]=((val%100)/10)+0x30;
str[3]=(val%10)+0x30;
str[4]=0;
}
