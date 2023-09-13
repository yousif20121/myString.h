#include <stdio.h>

unsigned char my_strlen(const char *str){

    char *tempStr = str;
    unsigned char count = 0;

    if(NULL != tempStr){
        while (*tempStr != '\0'){
            count++;
            tempStr++;
        }
    }
    else{
        printf("my_strlen: I didn't work.");
        count = 0;
    }
    return count;
}

char *my_strcpy(char* destAdd, const char* srcAdd){

    char* temp_destAdd = destAdd;
    char* temp_srcAdd = srcAdd;

    if ((NULL != temp_destAdd) && (NULL != temp_srcAdd)){
        while (*temp_srcAdd != '\0' ){
            *temp_destAdd = *temp_srcAdd;
            temp_destAdd++;
            temp_srcAdd++;
        }
        *temp_destAdd = '\0';
    }
    else{
        printf("my_strcpy: I didn't work.");
    }

    return destAdd;
}

char *my_strncpy(char *destAdd, const char *srcAdd, char n_Copy){

    char* temp_destAdd = destAdd;
    char* temp_srcAdd = srcAdd;

    if ((NULL != temp_destAdd) && (NULL != temp_srcAdd)){
        while (*(temp_srcAdd) && n_Copy--){
            *temp_destAdd = *temp_srcAdd;
            temp_destAdd++;
            temp_srcAdd++;
        }
        *temp_destAdd = '\0';
    }
    else{
        printf("my_strncpy: I didn't work.");
    }

    return destAdd;
}

char *my_strcat(char *destAdd, const char *srcAdd){

    char* temp_destAdd = destAdd;
    char* temp_srcAdd = srcAdd;


    if((NULL !=  temp_destAdd) && (NULL != temp_srcAdd)){
        while (*temp_destAdd != '\0'){
            temp_destAdd++;
        }

        while(*temp_srcAdd != '\0'){
            *temp_destAdd = *temp_srcAdd;
            temp_destAdd++;
            temp_srcAdd++;
        }
        *temp_destAdd = '\0';
    }
    else{
        printf("my_strcat: I didn't work.");
    }

return destAdd;
}

char *my_strncat(char *destAdd, const char *srcAdd, char n_Copy){

    char* temp_destAdd = destAdd;
    char* temp_srcAdd = srcAdd;


    if((NULL !=  temp_destAdd) && (NULL != temp_srcAdd)){
        while (*temp_destAdd != '\0'){
            temp_destAdd++;
        }

        while(*temp_srcAdd != '\0' && n_Copy--){
            *temp_destAdd = *temp_srcAdd;
            temp_destAdd++;
            temp_srcAdd++;
        }
        *temp_destAdd = '\0';
    }
    else{
        printf("my_strcat: I didn't work.");
    }

return destAdd;
}

int my_strcmp(const char *str1Add, const char *str2Add){

    int retValue = 0;
    char* temp_str1Add = str1Add;
    char* temp_str2Add = str2Add;

    if((NULL !=  temp_str1Add) && (NULL != temp_str2Add)){
        while((*temp_str1Add != '\0') && (*temp_str2Add != '\0')){
            if (*temp_str1Add > *temp_str2Add){
                retValue = 1;
                break;
            }
            else if(*temp_str1Add < *temp_str2Add){
                retValue = -1;
                break;
            }
            else if (*temp_str1Add == *temp_str2Add){
                retValue = 0;
            }
            temp_str1Add++;
            temp_str2Add++;
        }
    }
    else{
        printf("my_strcmp: I didn't work.");
    }

return retValue;
}

int my_strncmp(const char *str1Add, const char *str2Add, char n_Copy){

    int retValue = 0;
    char* temp_str1Add = str1Add;
    char* temp_str2Add = str2Add;

    if((NULL !=  temp_str1Add) && (NULL != temp_str2Add)){
        while((*temp_str1Add != '\0') && (*temp_str2Add != '\0') && --n_Copy){
            if (*temp_str1Add > *temp_str2Add){
                retValue = 1;
                break;
            }
            else if(*temp_str1Add < *temp_str2Add){
                retValue = -1;
                break;
            }
            else if (*temp_str1Add == *temp_str2Add){
                retValue = 0;
            }
            temp_str1Add++;
            temp_str2Add++;
        }
    }
    else{
        printf("my_strcmp: I didn't work.");
    }

return retValue;
}

char *my_strchr(const char *strAdd, int wantedChar){

    char* temp_strAdd = strAdd;
    int temp_wantedChar = wantedChar;

    if(temp_strAdd != NULL){
        while (*temp_strAdd != '\0'){
            if(*temp_strAdd == temp_wantedChar){
                break;
            }
            temp_strAdd++;
        }
        if(*temp_strAdd != temp_wantedChar){
            temp_strAdd = NULL;
        }
    }
    else{
        printf("my_strchr: I didn't work.");
    }

return temp_strAdd;
}

char *my_strrchr(const char *strAdd, int wantedChar){

    char* temp_strAdd = strAdd;
    int temp_wantedChar = wantedChar;
    char* lastOccurr = NULL;

    if(NULL != temp_strAdd){
        while (*temp_strAdd != '\0'){
            if(*temp_strAdd == temp_wantedChar){
                lastOccurr = temp_strAdd;
            }
            temp_strAdd++;
        }
        
        if(*temp_strAdd != temp_wantedChar){
            lastOccurr = NULL;
        }
    }
    else{
        printf("my_strrchr: I didn't work.");
    }

return lastOccurr;
}

char *my_strstr(const char *haystack, const char *needle){

    char* temp_haystack = haystack;
    char* temp_needle = needle;
    char* status = NULL;

    if((NULL != temp_haystack) && (NULL != temp_needle)){
        while(*temp_haystack != '\0'){

            status = temp_haystack;

            while ((*temp_needle != '\0') && (*temp_haystack == *temp_needle)){
                temp_haystack++;
                temp_needle++;
            }

            if (*temp_needle == '\0') {
                return status;
            }
            temp_haystack++;
        }
    }
    else{
        printf("my_strstr: I didn't work.");
    }

return NULL;
}

unsigned int my_strcspn(const char *str1Add, const char *str2Add){

    char* temp_str1Add = str1Add;
    char* temp_str2Add = str2Add;
    unsigned int count = 0;

    if((NULL != temp_str1Add) && (NULL != temp_str2Add)){
        while(*temp_str1Add != '\0'){
            if(*temp_str1Add == *temp_str2Add){
                break;
            }
            count++;
            temp_str1Add++;
        }
    }
    else{
        printf("my_strcspn: I didn't work.");
    }

return count;
}

unsigned int my_strspn(const char *str1Add, const char *str2Add){

    char* temp_str1Add = str1Add;
    char* temp_str2Add = str2Add;
    unsigned int count = 0;

    if((NULL != temp_str1Add) && (NULL != temp_str2Add)){
        while(*temp_str1Add != '\0'){
            if(*temp_str1Add == *temp_str2Add){
                count++;
            }
            temp_str1Add++;
            temp_str2Add++;
        }
    }
    else{
        printf("my_strspn: I didn't work.");
    }

return count;
}

char *my_strpbrk(const char *str1Add, const char *str2Add){

    char* temp_str1Add = str1Add;
    char* temp_str2Add = str2Add;

    if((NULL != temp_str1Add) && (NULL != temp_str2Add)){

        while (*temp_str1Add != '\0'){

            temp_str2Add = str2Add;

            while(*temp_str2Add != '\0'){

                if(*temp_str1Add == *temp_str2Add){
                    return temp_str1Add;
                }
                temp_str2Add++;
            }
            temp_str1Add++;
        }

        if(*temp_str1Add != temp_str2Add){
            temp_str1Add = NULL;
        }
    }
    else{
        printf("my_strpbrk: I didn't work.");
    }

return NULL;
}

void *my_memset(void *strAdd, int targetChar, unsigned int numOfChar){
    
    char* temp_strAdd = strAdd;

    if((NULL != temp_strAdd)){

        while ((*temp_strAdd != '\0') && numOfChar--){
            *temp_strAdd = targetChar;
            temp_strAdd++;
        }    
    }
    else{
        printf("my_memset: I didn't work");
    }
return strAdd;
}

int my_memcmp(const void *str1Add, const void *str2Add, unsigned int numOfChar){
    
    char* temp_str1Add = str1Add;
    char* temp_str2Add = str2Add;
    char retValue = 0;

    if((NULL != temp_str1Add) && (NULL != temp_str2Add)){

        while ((*temp_str1Add != '\0') && (*temp_str2Add != '\0') && numOfChar--){
            if(*temp_str1Add == *temp_str2Add){
                retValue = 0;
            }
            else if (*temp_str1Add < *temp_str2Add){
                retValue = -1;
                break;
            }
            else{
                retValue = 1;
                break;
            }
            temp_str1Add++;
            temp_str2Add++;
        }
    }
    else{
        printf("my_memcmp: I didn't work");
    }
    
return retValue;
}

void *my_memcpy(void *destAdd, const void * srcAdd, unsigned int numOfChar){
    
    char* temp_destAdd = destAdd;
    char* temp_srcAdd = srcAdd;

    if((NULL != temp_destAdd) && (NULL != temp_srcAdd)){

        while ((*temp_destAdd != '\0') && (*temp_srcAdd != '\0') && numOfChar--){
            *temp_destAdd = *temp_srcAdd;
            temp_destAdd++;
            temp_srcAdd++;
        }
    }
    else{
        printf("my_memcpy: I didn't work");
    }

return destAdd;
}

void *my_memmove(void *destAdd, const void * srcAdd, unsigned int numOfChar){
    
    char* temp_destAdd = destAdd;
    char* temp_srcAdd = srcAdd;
    unsigned int temp_numOfChar = numOfChar;
    char* temp_Copy = temp_destAdd;

    if((NULL != temp_destAdd) && (NULL != temp_srcAdd)){

        while ((*temp_Copy != '\0') && (*temp_srcAdd != '\0') && temp_numOfChar--){
            *temp_Copy = *temp_srcAdd;
            temp_Copy++;
            temp_srcAdd++;
        }
        temp_numOfChar = numOfChar;
        while ((*temp_destAdd != '\0') && (*temp_Copy != '\0') && temp_numOfChar--){
            *temp_destAdd = *temp_Copy;
            temp_destAdd++;
            temp_Copy++;
        }
    }
    else{
        printf("my_memmove: I didn't work");
    }

return destAdd;
}

void *my_memchr(const void *strAdd, int wantedChar, unsigned int numOfChar) {
    char *temp_strAdd = strAdd;
    char temp_wantedChar = (unsigned char)wantedChar;

    if (temp_strAdd != NULL) {
        
        while (numOfChar-- > 0) {
            
            if (*temp_strAdd != temp_wantedChar) {
                temp_strAdd++;
            } 
            else {
                return temp_strAdd;
            }
        }
    } 
    else {
        printf("my_memchr: I didn't work.\n");
    }

    return NULL;
}