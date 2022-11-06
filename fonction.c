#include "fonction.h"
void SaisiPersonne ( Personne *v)
{
    printf("Nom = \n");
    scanf("%s" , v->nom);
    printf("prenom = \n");
    scanf("%s" , v->prenom);
    printf("jour= ,Mois = Anne= " );
    scanf("%d%d%d",&v->d.jour,&v->d.mois,&v->d.annee);
    printf("Matricule  = \n");
    scanf("%s" , v->matricule);


}
void AjouterPersonne (Personne tab[],Personne P, int *n){

tab[*n]=P;
(*n)++;


}
void AfficherPersonne(Personne tab[],int n){
    int i ;
    for(i=0;i<n ; i++){
    printf("Nom = %s , prenom = %s ,matricule % s, d_nais  = %d% ,%d, %d  ", tab[i].nom,tab[i].prenom,tab[i].matricule,tab[i].d.jour,tab[i].d.mois,tab[i].d.annee);
}}

void supprimerPersonne(Personne tab[], int *n){
    int test =-1;
    char Mat[20];
    int i=0,j=0;
    printf("donee la matricule");
    scanf("%s",Mat);
    while(i<(*n))
    {
        if(strcmp(tab[i].matricule,Mat)==0)
         {test=i;
             j=i;
             (*n)--;
             while(j<(*n))
             {
                 tab[j]=tab[j+1];
             }j++;
         }
         else
            i++;
     }
if (test==i)
printf("Personne existe ");
else printf("Personne n'esiste pas");
 }
void supprimerModiffier(Personne tab[], char *mat1,int n)

{   int test = -1;
    char Mat[20];
    int i=0,j=0;
    printf("donner la matricule \n");
    scanf("%s",Mat);
    for(i=0 ; i<n ; i++)
    {
        if(strcmp(tab[i].matricule,mat1)==0)
        {
            test=i;
            strcpy(tab[i].matricule,Mat);
        }
    }


}
/*Personne P;
SaisiPersonne(&P);
    for(i=0 ; i<n ; i++)
    {
        if(strcmp(tab[i].matricule,mat1)==0)
        {
            test=i;
 }}           tab[i]=p;
*/
