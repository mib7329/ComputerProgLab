#include <stdio.h>

// Lab 3

void display_matrix(int row,int col,int matrix[row][col]){
    int i,j;
    for (i=0; i<row;i++){
        for (j=0; j<col; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void add_matrix(int row,int col,int mat1[row][col],int mat2[row][col]){
    int i,j;
    int sum[row][col];
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }}
        printf("Sum of the matrices is \n");
        display_matrix(row,col,sum);
}

void transpose(int row,int col,int matrix[row][col]){
    int i,j;
    int tr[row][col];
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            tr[i][j]=matrix[j][i];
        }}
        printf("The transpose of the matrix is \n");
        display_matrix(row,col,tr);
}

void product(int row,int col,int mat1[row][col],int mat2[row][col]){
    int i,j,k,sum;
    int prod[row][col];
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            sum=0;
            for (k=0;k<row;k++){
                sum+=mat1[i][k]+mat2[k][j];
                prod[i][j]=sum;
        }}}
        printf("Product of the matrices is \n");
        display_matrix(row,col,prod);
}

int main(){
    int col,row,z;
    int i,j;
    printf("Enter row and column size for the matrices : ");
    scanf("%d %d",&row,&col);

    int mat1[row][col], mat2[row][col];
    printf("FOR MATRIX 1 \n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("Enter int for %d row and %d column : ",i,j);
            scanf("%d",&mat1[i][j]);
        }}

    printf("FOR MATRIX 2 \n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("Enter int for %d row and %d column : ",i,j);
            scanf("%d",&mat2[i][j]);
        }}

    display_matrix(row,col,mat1);
    display_matrix(row,col,mat2);

    while(1){
        int choice;
        printf("TYPE 1 FOR SUM\nTYPE 2 FOR TRANSPOSE\nTYPE 3 FOR PRODUCT\nTYPE 4 TO EXIT THE PROFRAM ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                add_matrix(row,col,mat1,mat2);
                break;
            case 2:
                int c;
                printf("Choose from matrix1 or matrix 2 : ");
                scanf("%d",&c);
                if (c==1){
                    transpose(row,col,mat1);
                }
                else if (c==2){
                    transpose(row,col,mat2);
                }
                break;
            case 3:
                product(row,col,mat1,mat2);
                break;
            case 4:
                return 0;
            default:
                printf("Wrong choice");                
        }
    }
    return 0;        
}
