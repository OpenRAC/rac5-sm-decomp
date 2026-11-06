typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_00248C70;
extern int func_130418(int);
void func_02B590(void)
{
    int value = func_130418((int)0x03EB6DAEu);
    D_00248C70.value = value;
    if (value == 0)
        D_00248C70.limit = 0x7fffffff;
}