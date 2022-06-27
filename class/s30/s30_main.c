#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

typedef struct  
{
    int x;
    int y;
    int z;
} Point;

Point* CreatePoint(int x, int y, int z)
{
    Point* pp;
    // pp.x = 5;
    // malloc(..)
    // Point*;
    //(*Point).x
    // pp->x
    pp->x = 4;
    (*pp).x = 4;
    pp->y = 6;
    (*pp).y = 7;
}

double distance1(int x1, int y1, int z1, int x2, int y2, int z2)
{
    int xd = x1 - x2;
    int yd = y1 - y2;
    int zd = z1 - z2;
    return sqrt(xd*xd + yd*yd + zd*zd);      
}
double distance(Point p1, Point p2)
{
    int xd = p1.x - p2.x;
    int yd = p1.y - p2.y;
    int zd = p1.z - p2.z;
    return sqrt(xd*xd + yd*yd + zd*zd);
}

int amplitude(Point p)
{
    return p.x * p.x + p.y * p.y;
}

int str_len(const char* buf)
{
    int i=0;
    while (*(buf++))
        i++;
    return i;
}

char* string_duplicate(const char* buf)
{
    int len = str_len(buf)+1;
    char* bufcopy = (char*) malloc(len * sizeof(char));
    int i=0;
    while (*buf)
        bufcopy[i++] = *(buf++);
    bufcopy[i] = 0;
    return bufcopy;
}

int* create_matrix(int ncol, int nrow)
{
    return (int*) malloc(ncol * nrow * sizeof(int));
}

int** create_jagged_matrix(int ncol, int nrow)
{
    int** matrix = (int**) malloc( nrow * sizeof(int*));
    for(int i=0; i<nrow; i++)
        matrix[i] = (int*) malloc( ncol * sizeof(int));
}

void zero_jagged_matrix(int** pMatrix, int ncol, int nrow)
{
    for(int i=0; i<nrow; i++)
        for(int j=0; j<ncol; j++)
            pMatrix[i][j] = 0;
}

void test()
{
    char buf[120];
    for(int i=0; i<100; i++)
        buf[i] = 'A';
}

int main(int argc, char const *argv[])
{
    char buf[] = "ali hossein";
    char* my_copy = (char*) buf;
    char* buf_copy = string_duplicate(buf);
    int* matrix = create_matrix(10, 10);
    printf("%s\n%s\n%s\n", buf, buf_copy, my_copy);
    buf[4] = 'S';
    printf("%s\n%s\n%s\n", buf, buf_copy, my_copy);

    for(int i=0; i<1000; i++)
    {
        int* ptr = create_matrix(100,100);
        Sleep(50);
        printf(".");
        free(ptr);
    }

    Point pa;
    pa.x = 4;
    pa.y = 6;
    pa.z = 7;    
}

