#include<stdio.h>
#include<cs50.h>

int main(void){
int lenght;
do
{
lenght = get_int("Height:");
}
while(8>lenght&&lenght<1);
for (int i= 0;i<lenght;i++)
{
    for(int k=0;k<lenght-i-1;k++)
    {printf(" ");
    }
for (int l =0;l<lenght-(lenght-i-1);l++)

{
    printf("#");
}
for (int h =0;h<2;h++){
    printf(" ");
}
for (int g=0;g<lenght-(lenght-1)+i;g++){
    printf("#");
}
printf("\n");
}
}

