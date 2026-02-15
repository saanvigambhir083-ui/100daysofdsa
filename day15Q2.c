// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) 
{
    int n=matrixSize;     
    int m=matrixColSize[0]; 
    int row[n];
    int col[m];
    for(int i=0;i<n;i++)
        row[i]=0;
    for(int j=0;j<m;j++)
        col[j]=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(matrix[i][j]==0)
        {
         row[i]=1;
         col[j]=1;
        }
      }
    }
    for(int i=0;i<n;i++)
    {
     for(int j=0; j<m;j++)
    {
     if(row[i]==1||col[j]==1)
     {
     matrix[i][j]=0;
     }
    }
  }
}