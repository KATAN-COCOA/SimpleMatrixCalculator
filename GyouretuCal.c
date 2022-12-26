#include <stdio.h>

void gyouretu( int gyou, int retu, int gyou2, int retu2 ,char kigou)
{
    //第1項目
    int i, j;
    int cell_1[gyou][retu];

    printf("第1項目の成分に値を入れてください。\n");

    for( i = 0; i < gyou ;i ++ )
    {
        for( j = 0 ; j < retu ; j ++ )
        {
            printf( "[%d][%d] ", i + 1, j + 1 );
            scanf( "%d", &cell_1[i][j] );
        }
    }
    printf( "--------\n" );
    for( i = 0; i < gyou; i ++ )
    {
        for( j = 0; j < retu; j ++ )
        {
            printf( "%2d", cell_1[i][j] );
        }
        printf( "\n" );
    }
    printf( "--------\n" );

    //第2項目
    int cell_2[gyou2][retu2];
    printf("第2項目の成分に値を入れてください。\n");
    for( i = 0; i < gyou2; i ++ )
    {
        for(j = 0;j < retu2;j ++)
        {
            printf("[%d][%d] ", i + 1, j + 1);
            scanf("%d", &cell_2[i][j]);
        }
    }
    printf( "--------\n" );
    for( i = 0; i < gyou2; i ++ )
    {
        for( j = 0; j < retu2;j ++ )
        {
            printf( "%2d", cell_2[i][j] );
        }
        printf( "\n" );
    }
    printf( "--------\n");

    //計算
    if( kigou == '+')
    {
        for( i = 0; i < gyou; i ++ )
        {
            for( j = 0; j < retu; j ++)
            {
                cell_1[i][j] += cell_2[i][j];
            }
        }
    }
    else if( kigou == '-')
    {
        for( i = 0; i < gyou; i ++ )
        {
            for( j = 0; j < retu; j ++)
            {
                cell_1[i][j] -= cell_2[i][j];
            }
        }
    }

    printf("ANSWER\n");
    for( i = 0; i < gyou; i ++ )
    {
        for( j = 0; j < retu;j ++ )
        {
            printf( "%2d", cell_1[i][j] );
        }
        printf( "\n" );
    }
    printf( "--------\n" );
}

int main()
{
    int flag = 0;
    int gyou, retu;
    int gyou2, retu2;
    char kigou;

    printf( "足し算/引き算? 記号を入力してください。\n" );
    scanf( "%c", &kigou);

    while( flag != 1)
    {
        printf( "第1項目を入力してください。\n" );
        printf( "行数と列数を入力してください。\n" );
        printf( "行数>>>" );
        scanf( "%d", &gyou );
        printf( "列数>>>" );
        scanf( "%d", &retu );

        printf( "第2項目を入力してください。\n" );
        printf( "行数と列数を入力してください。\n" );
        printf( "行数>>>" );
        scanf( "%d", &gyou2 );
        printf( "列数>>>" );
        scanf( "%d", &retu2 );

        if( gyou == gyou2 && retu == retu2 )
        {
           flag += 1;
           break;
        }
        else
        {
            printf( "---------------------------------------------------------------------------------\n");
            printf( "第1項目の列数,行数・第2項目行数,列数が一致していません。もう一度入力してください。\n");
            printf( "---------------------------------------------------------------------------------\n");
        }
    }

    gyouretu( gyou, retu, gyou2, retu2 , kigou);
    return 0;
}