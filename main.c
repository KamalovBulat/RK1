#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char *input, char *dict);

int main(int argc, char *argv[])
int main()
{
    FILE *dict;    
    if((dict=fopen(argv[2], "r"))==NULL){        
    FILE *dict;   
    if((dict=fopen("dict.txt", "r"))==NULL){
        printf("ERROR in opening dictionary");
    };

    FILE *input;    
    FILE *input;    

    if((input=fopen(argv[1],"r"))==NULL){       
    if((input=fopen("input.txt","r"))==NULL){
        printf("ERROR in opening input\n");
    }

    FILE *output;   
    remove(argv[3]);                     
    FILE *output; 
    remove("output.txt");


    int ch; 
    int dic;    
  
    int ch;     
    int dic;    
    while((ch=getc(input))!=EOF){
        printf("%c", ch);
    }
    rewind(input);
    printf("\n-------------------\n");

    
    int max_len=0;
    while((ch=getc(input))!=EOF){
        int lett_=0;
 int main(int argc, char *argv[])
   

    
    int warning=0;
   
    while((ch=getc(input))!=EOF){

        char *letters = (char*)malloc(max_len+1);
        char *letters = (char*)malloc(max_len+1);
        if(letters==NULL) printf("!ERROR!");

        int i =0;
        while((ch!=' ')&&(ch!=EOF)&&(ch!=';')&&(ch!='\n')&&(ch!='-')){
            letters[i] = ch;    
            ch = getc(input);   
            letters[i] = ch;    
            ch = getc(input);  
            i++;
        }
        letters[i]='\0';

       
        int dict_state=0;
        while ((dic=getc(dict))!=EOF){
            char *dict_word = (char*)malloc(100);  
            if(dict_word==NULL) printf("!ERROR!"); 
            char *dict_word = (char*)malloc(100); 
            if(dict_word==NULL) printf("!ERROR!"); 
            
            int j=0;        
            int j=0;        
            while((dic!='\n')&&(dic!=EOF)){
                dict_word[j]=dic;
                dic=getc(dict);
int main(int argc, char *argv[])
          
        }
        else{
            

            output=fopen(argv[3], "a+");       
           
            output=fopen("output.txt", "a+");
            int re; int repeat_state = 0;
            while((re=getc(output))!=EOF){
                char *repeat = (char*)malloc(max_len+1);
int main(int argc, char *argv[])
    if(warning) printf("WARNING");
    return 0;
}
    
int check(char *input, char *dict){
    int inp_len = strlen(input);
    int dict_len = strlen(dict);
 int check(char *input, char *dict){
        }
    }
    return 1;

}
