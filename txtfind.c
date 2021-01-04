#include <stdio.h>
#include <string.h>
#define  LINE 256
#define  W 30

int getlines(char s[]){
   
    int counter=0;
    char c;
   
    while((c=getchar())!='\n'&& c!=EOF){
        s[counter]=c;
        counter++;
    }
    s[counter]=0;
    if(c==EOF){
		return counter;
		}
	else {
		return counter+1;
		}
    return counter;
}

int getWord(char w[]){
   
    int counter=0;
    char c;
   
    while((c=getchar())!= '\n' && c!='\t' && c!='\0' &&c!='\r'  && c!=' '&& c!=EOF ){
        w[counter]=c;
        counter++;
    }
    w[counter]=0;
    if(c==EOF){
		return counter;
		}
	else {
		return counter+1;
		}
    return counter;
}

int lenWord(char *w){
   
    int counter=0;
   
    while(*w !='\0'){
        w++;
        counter++;
    }
    return counter;
}

int substring(char *str1, char *str2){
	
	if(strlen(str2)>strlen(str1)){
	
		return 0;
	}
	
	if(strstr(str1,str2)!=NULL){ return 1; }
	else {
		return 0;
	}
}

int similar (char *s, char *t, int n){
    int dif =0;
    if(strlen(s)<strlen(t)){
        return 0;
    }
    char* pt= t;
    char* ps= s;
    while(*ps !='\0'){
        if(*pt != *ps){
            dif++;
            ps++;
           
        }
        else{
            pt++;
            ps++;
        }
    }
    if(n>=dif){return 1;}
   
    return 0;
   
   
}

void print_lines(char * str){
   
    char line[LINE];
   
    while(getlines(line)){
    
        if (substring(line,str)==1){
            printf("%s\n",line);
        }
    }
   
}
void print_similar_words(char * str){

    char word[W];
   
    while(getWord(word)){
        if (similar(word,str,1)==1){
            printf("%s\n",word);
        }
    }
}
int main(){
   char target [W];
   char c;
   
   scanf(" %s", target);
   
   scanf(" %c", &c);
   
  if(c == 'a'){
  	//printf("1");
        print_lines(target);
    }
    if(c == 'b'){
    	//printf("2");
        print_similar_words(target);
    }
   
    return 0 ;
   
}


