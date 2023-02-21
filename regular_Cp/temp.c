#include<stdio.h>

int main(){
   int n, m, i, j, k;
        int l, r;
        char s[6];

        scanf("%d %d", &n, &m);

        int row[n];
        int col[n];
        for(i=0; i<n; i++){
            row[i]=0;
            col[i]=0;
        }
        while(m--){
             scanf("%s %d %d", s, &l, &r);
             if(s[0]=='R'){
                row[l-1]+=r;
             }else{
             col[l-1]+=r;
             }
        }
        j=0, k=0;
        for(i=0; i<n; i++){
            if(row[i]>j)j=row[i];
            if(col[i]>k)k=col[i];

        }

        printf("%d\n", j+k);

}
