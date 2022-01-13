#define SIZE 4
 
bool minor2x2(int arr[SIZE][SIZE], int minor[2][2], int &row1, int &row2, int &col1, int &col2)
{
    minor[0][0] = arr[row1][col1];
    minor[0][1] = arr[row1][col2];
    minor[1][0] = arr[row2][col1];
    minor[1][1] = arr[row2][col2];
 
    if (++col2 >= SIZE)
    {
        if (++col1 >= SIZE-1)
        {
            if (++row2 >= SIZE)
            {
                if (++row1 >= SIZE-1)
                    return false;
                row2 = row1+1;
            }
            col1 = 0;
        }
        col2 = col1+1;
    }
    return true;
}
 
int main()
{
    int A[SIZE][SIZE] = 
    {
        {00, 01, 02, 03},
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };
    int m[2][2];
    int r1 = 0;
    int r2 = 1;
    int c1 = 0;
    int c2 = 1;
    bool cont;
 
    do
    {
        cont = minor2x2(A, m, r1, r2, c1, c2);
        //считаем определитель m
    }while(cont);
 
    return 0;
}