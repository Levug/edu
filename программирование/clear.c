#include<stdio.h>
#include<math.h>
#define I 4
#define J 5
int main()
{
    float M[I][J];
    float u21, u31, u41, u32, u42, u43, x1, x2, x3, x4, rangM = 4, rangMS = 4, n = I;
    float V[I][J], V1[I][J], V2[I][J], k, h, h1, Mm[I][J-1];
    int i, j, p = 0, pop=3, t=4;
    int hide = 1;// Чтобы показать подробно должен быть 0

    FILE *fp;// Подключаем файл с данными матрицы и задаем матрицу + задаем нерасширеную матрицу
    fp=fopen("input.txt", "r");
    for (i=0;i<I;i++)
    {
        for (j=0;j<J;j++)
        {
            fscanf (fp,"%f ",&M[i][j]);
            if (j != J)
            {
                Mm[i][j]=M[i][j];
            }
            
        }
    }

    for (j=0;j<J-1;j++)// Ищем количество переменных Х
    {
        for (p=0,i=0;i<I;i++)
        {
            if (Mm[i][j] == 0)
            {
                p = p+1;;
                if (p == I)
                {
                    n = n - 1;
                    
                }
            }
            
        }
    }    

    //printf("\nNx = %.0f\n", n);// количество X

    for ( i = 0; i < I; i++)// копируем М на V
    {
        for ( j = 0; j < J; j++)
        {
            //scanf("%f", &M[i][j]);
            //M[i][j] = 1 + rand()%5;
            V[i][j]=M[i][j];           
        }
    }

    u21=M[1][0]/M[0][0];
    u31=M[2][0]/M[0][0];
    u41=M[3][0]/M[0][0];

    double U1[3]={u21, u31, u41};


    
    for ( p = 0, i = 1; i < I;p++, i++)// Преобразовываем матрицу к треугольному виду 1
    {
        for ( j = 0; j < J; j++) 
        {
            V[i][j]=M[i][j] - M[0][j]*U1[p];
        } 
    }

    u32=V[2][1]/V[1][1];
    u42=V[3][1]/V[1][1];

    double U2[2]={u32, u42};

    

    for ( i = 0; i < I; i++)// Клонируем V на V1
    {
        for ( j = 0; j < J; j++)
        {
           V1[i][j]=V[i][j]; 
        }
        
    }
    

    for ( p = 0, i = 2; i < I;p++, i++)// Преобразовываем матрицу к треугольному виду 2
    {
        for ( j = 1; j < J; j++) 
        {
            V1[i][j]=V[i][j] - V[1][j]*U2[p];
        } 
    }    

    u43=V1[3][2]/V1[2][2];



    double U3[1]={u43};



    for ( i = 0; i < I; i++)// Клонируем V1 на V2
    {
        for ( j = 0; j < J; j++)
        {
           V2[i][j]=V1[i][j]; 
        }
        
    }    

    for ( p = 0, i = 3; i < I;p++, i++)// Преобразовываем матрицу к треугольному виду 3
    {
        for ( j = 2; j < J; j++) 
        {
            V2[i][j]=V1[i][j] - V1[2][j]*U3[p];
        } 
    }    


    
    for (i=0;i<I;i++)// Ищем ранг V2 (без столбца независимых членов)
    {
        for (p=0,j=0;j<J-1;j++)
        {
            if (V2[i][j] < pow(10, -5))
            {
                p = p+1;;
                if (p == I)
                {
                    rangM = rangM - 1;
                    
                }
                //printf(" P = %i  ", p);
                
            }
            
        }
    }        

    if (rangM == rangMS, rangM == n)// Проверка решаемости методом Кроникера-Капелли
    {

    if (hide == 0)// Показать подробности
    {   
        printf("\nU1\n");
        for ( i = 0; i < 3; i++)
        {
            printf("%f  ", U1[i]);
        }

        printf("\nU2\n");
        for ( i = 0; i < 2; i++)
        {
            printf("%f  ", U2[i]);
        }    

        printf("\n%f / %f = %f", V1[3][2],V1[2][2], u43);

        printf("\nU3\n");
        for ( i = 0; i < 1; i++)
       {
            printf("%f  ", u43);
        }

        printf("\nM\n");
        for ( i = 0; i < I; i++)// Выводим M
        {
            for ( j = 0; j < J; j++) 
            {
                printf("%.0f ", M[i][j]);
            } 
            printf("\n");
        }

        printf("\nV\n");
        for ( i = 0; i < I; i++)// Выводим V
        {
            for ( j = 0; j < J; j++) 
            {
                printf("%.3f ", V[i][j]);
            } 
            printf("\n");
        }
        printf("\nV1\n");
        for ( i = 0; i < I; i++)// Выводим V1
        {
            for ( j = 0; j < J; j++) 
            {
                printf("%.3f ", V1[i][j]);
            } 
            printf("\n");
        }

        printf("\nV2\n");
        for ( i = 0; i < I; i++)// Выводим V2   
        {
            for ( j = 0; j < J; j++) 
            {
                printf("%.2f    ", V2[i][j]);
            } 
            printf("\n");
        }
    }

        // Обратный ход ＼(￣▽￣)／ шел 2 час ночи
        x1=V2[3][4]/V2[3][3];
        x2=(V2[2][4]-x1*V2[2][3])/(V2[2][2]);
        x3=(V2[1][4]-x1*V2[1][3]-x2*V2[1][2])/(V2[1][1]);
        x4=(V2[0][4]-x1*V2[0][3]-x2*V2[0][2]-x3*V2[0][1])/(V2[0][0]);
        printf("X4 = %f\nX3 = %f\nX2 = %f\nX1 = %f", x1, x2, x3, x4);
    }
    else if (rangM == rangMS, rangM < n)
    {
        printf("Resheniy beskonechnoe mnozhestvo");
    }
    else
    {
        printf("Resheniy net");
    }       
    printf("\nRANG = %.0f  ", rangM);
    return 0;
}