typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_002809F0;
extern int func_13B5A0(int);
void func_02B540(void)
{
    int value = func_13B5A0((int)0x03EB6DAEu);
    D_002809F0.value = value;
    if (value == 0)
        D_002809F0.limit = 0x7fffffff;
}