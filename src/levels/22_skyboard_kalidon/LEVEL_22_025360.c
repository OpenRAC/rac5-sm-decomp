typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_00183370;
extern int func_100C58(int);
void func_025360(void)
{
    int value = func_100C58((int)0x03EB6DAEu);
    D_00183370.value = value;
    if (value == 0)
        D_00183370.limit = 0x7fffffff;
}