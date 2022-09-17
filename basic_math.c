extern int add(int x, int y);
extern int sub(int x, int y);
extern int mul(int x, int y);
extern float fdiv(float x, float y);

int add(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int mul(int x, int y)
{
    return x*y;
}

float fdiv(float x, float y)
{
    #if y == 0
        printf("divisor can NOT be zero!\n");
    #endif
        return x/y;
}