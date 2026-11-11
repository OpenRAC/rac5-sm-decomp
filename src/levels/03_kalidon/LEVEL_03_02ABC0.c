typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_0024C5F0;
extern int func_1282D0(int);
void func_02ABC0(void)
{
    int value = func_1282D0((int)0x03EB6DAEu);
    D_0024C5F0.value = value;
    if (value == 0)
        D_0024C5F0.limit = 0x7fffffff;
}