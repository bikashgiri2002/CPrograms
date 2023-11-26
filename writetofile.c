#include<stdio.h>
int main()
{
    FILE *txt;
    txt=fopen("text.txt","w");
    fprintf(txt,"%c",'B');
    fprintf(txt,"%c",'B');
    fprintf(txt,"%c",'B');
    fprintf(txt,"%c",'B');
    fprintf(txt,"%c",'j');
    fprintf(txt,"%c",'B');
    fprintf(txt,"%c",'j');
    fprintf(txt,"%c",'B');
    fclose(txt);
    txt=fopen("text.txt","a");
    fprintf(txt,"%c",'\n');
    fprintf(txt,"%c",'j');    
    fprintf(txt,"%c",'i');    
    fprintf(txt,"%c",'n');    
    fprintf(txt,"%c",'u');
    return 0;
}