#ifndef __PROGTEST__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TELCO_NUMBERS 10

#define TELCO_NUMBERS 10
typedef struct TNode
 {
   char          * m_Dest;
   struct TNode  * m_Child[TELCO_NUMBERS];
 } TNODE;
#endif /* __PROGTEST__ */

void delTree ( TNODE * root )
 {
   /* todo */
 }
int addDest ( TNODE ** root, const char * prefix, const char * dest )
{
    int i=0;
    printf("%d\n", strlen(prefix));
   /* printf("%c\n", prefix[0]);
    printf("%c\n", prefix[1]);
    printf("%c\n", prefix[2]);*/
    for(i=0;i<strlen(prefix);i++)
               printf("%c", prefix[i]);
    
    
    int ret;
    if(root == NULL){
            root = (TNODE*) malloc (sizeof(TNODE));
    }
    if(*root == NULL){
            *root = (TNODE**) malloc (sizeof(TNODE));
    }
    
    /*TNODE* current = *root;
    TNODE* next = ( TNODE * ) malloc (sizeof(TNODE));*/
    
    if ( strlen(prefix) == 0 )
    {
        return 0;
    }
    for(i = 0; i < strlen(prefix); i++ )
    {
       if(prefix[i] > '9' || prefix[i] < '0'){
                    printf("Zadano neco jineho nez cislo\n");
       }
    }
    
    
    for ( i = 0; i < strlen(prefix); i++ )
    {    
        if(current->m_Child[cislo] == NULL) 
        { 
            current->m_Child[cislo] = (TNODE*)malloc(sizeof(TNODE));
            //addDest(current->m_Child[cislo], prefix+1, dest);
            addDest((*root)->m_Child[*prefix], prefix+1; dest);  
        }
        else
        {   
            
        }
    }
    return 1;*/
}

#ifndef __PROGTEST__
int main ( int argc, char * argv [] )
 {
  /* tests */
  
    TNODE       * root;
    char          tmpStr[100];
    const char  * dst;
    int           res;

    root = NULL;
    res = addDest ( &root, "420", "Czech republic" ); /* res = 1 */
    //printf("%d", res);
   
   system("PAUSE");
   return 0;
 }  
#endif /* __PROGTEST__ */
