#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check(char *input, char *dict);

int main(int argc, char *argv[])
int main()
{
    FILE *dict;     // Ôàéë ñëîâàðÿ
    if((dict=fopen(argv[2], "r"))==NULL){        // argv[2]
    FILE *dict;     // Файл словаря
    if((dict=fopen("dict.txt", "r"))==NULL){
        printf("ERROR in opening dictionary");
    };

    FILE *input;    // Âõîäíîé ôàéë
    FILE *input;    // Входной файл

    if((input=fopen(argv[1],"r"))==NULL){       // argv[1]
    if((input=fopen("input.txt","r"))==NULL){
        printf("ERROR in opening input\n");
    }

    FILE *output;   // Óêàçàòåëü íà âûõîäíîé ôàéë
    remove(argv[3]);                       // argv[3]
    FILE *output;   // Указатель на выходной файл
    remove("output.txt");

    /*âûâîä ñîäåðæèìîãî ôàéëà â êîíñîëü*/
    int ch;     // Óêàçàòåëü íà ôàéë input
    int dic;    // Óêàçàòåëü íà ôàéë dic
    /*вывод содержимого файла в консоль*/
    int ch;     // Указатель на файл input
    int dic;    // Указатель на файл dic
    while((ch=getc(input))!=EOF){
        printf("%c", ch);
    }
    rewind(input);
    printf("\n-------------------\n");

    /*Íàéäåì ìàêñèìàëüíóþ äëèíó ñëîâà*/
    /*Найдем максимальную длину слова*/
    int max_len=0;
    while((ch=getc(input))!=EOF){
        int lett_=0;
@@ -43,29 +43,29 @@ int main(int argc, char *argv[])
    //printf("%d",max_len);
    //printf("\n");

    /*Íà÷èíàåì àíàëèçèðîâàòü è èñêàòü ñëîâà*/
    /*Начинаем анализировать и искать слова*/
    int warning=0;
    // letters çäåñü - ýòî íàéäåííîå ÑËÎÂÎ!
    // letters здесь - это найденное СЛОВО!
    while((ch=getc(input))!=EOF){

        char *letters = (char*)malloc(max_len+1);// Âûäåëèëè ìàêñèìàëüíóþ ïàìÿòü äëÿ ñëîâà
        char *letters = (char*)malloc(max_len+1);// Выделили максимальную память для слова
        if(letters==NULL) printf("!ERROR!");

        int i =0;
        while((ch!=' ')&&(ch!=EOF)&&(ch!=';')&&(ch!='\n')&&(ch!='-')){
            letters[i] = ch;    // Ñîçäàåì ëîêàëüíóþ ñòðîêó è ïîìåùàåì â íåå ñèìâîëû,
            ch = getc(input);   // ñîñòàâëÿÿ ñëîâî
            letters[i] = ch;    // Создаем локальную строку и помещаем в нее символы,
            ch = getc(input);   // составляя слово
            i++;
        }
        letters[i]='\0';

        /*Ñðàâíåíèå ñî ñëîâàðåì*/
        /*Сравнение со словарем*/
        int dict_state=0;
        while ((dic=getc(dict))!=EOF){
            char *dict_word = (char*)malloc(100);   // Ìîæíî òàêæå âûïîëíèòü ïðîâåðêó
            if(dict_word==NULL) printf("!ERROR!");  // íà ìàêñèìàëüíóþ äëèíó ñëîâà
            char *dict_word = (char*)malloc(100);   // Можно также выполнить проверку
            if(dict_word==NULL) printf("!ERROR!");  // на максимальную длину слова
            //char dict_word[100];
            int j=0;        // Áóäåò ñ÷åò÷èêîì
            int j=0;        // Будет счетчиком
            while((dic!='\n')&&(dic!=EOF)){
                dict_word[j]=dic;
                dic=getc(dict);
@@ -82,10 +82,10 @@ int main(int argc, char *argv[])
            //printf("Nashlos");
        }
        else{
            /*Ñîçäàíèå ôàéëà âûõîäíîãî ôàéëà*/
            /*Создание файла выходного файла*/

            output=fopen(argv[3], "a+");           // argv[3]
            // Ïðîâåðêà: áûëî ëè óæå ýòî ñëîâî â ñëîâàðå?
            output=fopen("output.txt", "a+");
            // Проверка: было ли уже это слово в словаре?
            int re; int repeat_state = 0;
            while((re=getc(output))!=EOF){
                char *repeat = (char*)malloc(max_len+1);
@@ -110,7 +110,7 @@ int main(int argc, char *argv[])
    if(warning) printf("WARNING");
    return 0;
}
    // Ôóíêöèÿ äëÿ ñðàâíèâàíèÿ ñòðîê
    // Функция для сравнивания строк
int check(char *input, char *dict){
    int inp_len = strlen(input);
    int dict_len = strlen(dict);
@@ -124,5 +124,4 @@ int check(char *input, char *dict){
        }
    }
    return 1;

}
