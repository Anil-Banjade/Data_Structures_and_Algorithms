#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("string1.txt","w+");
    char a[20],b[20]; 
    
    if(fp==NULL){
        printf("not created");
    }
    else{
        fgets(a,20,stdin);
        fwrite(a,sizeof(a),1,fp);
        rewind(fp);
        fread(a,sizeof(a),1,fp);
        printf("reading\n");
        int i;
        int count=0;
        for(i=0;a[i]!='\0';i++){
            if(a[i]==' '){
                count=count+1;
            }
        }

        printf("%d",count+1); 
        

    } 
    fclose(fp);

    

}