typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_00247070;
extern int func_12D068(int);
void func_02B108(void)
{
    int value = func_12D068((int)0x03EB6DAEu);
    D_00247070.value = value;
    if (value == 0)
        D_00247070.limit = 0x7fffffff;
}