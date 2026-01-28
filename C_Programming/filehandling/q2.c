#include<stdio.h>
void main(){
    struct Employe{
    char name[20];
    int id;
    int salary;
};
    struct Employe a[3],b[3]; 
    struct Employe temp;
    FILE *fp;    
    int i;    
    for(i=0;i<3;i++){
        scanf("%s",a[i].name);        
        scanf("%d",&a[i].id);
        scanf("%d",&a[i].salary); 
        }

// for(i=0;i<3;i++){ 
//         printf("%s%d%d",a[i].name,a[i].id,a[i].salary);
//     }
    fp=fopen("string.txt","w+b"); 
    if(fp==NULL){
        printf("file not created");
    }
    else{
        fwrite(a,sizeof(a[0]),3,fp);
        rewind(fp);
        fread(b,sizeof(b[0]),3,fp);
    }
int j;
    for(i=0;i<3;i++){ 
        for(j=0;j<3;j++){
            if(b[j].salary<b[j+1].salary){
                temp=b[j+1];
                b[j]=b[j+1];
                b[j+1]=temp;
                
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%s %d %d",b[i].name,b[i].id,b[i].salary);
    }
    fclose(fp);
    
}  
