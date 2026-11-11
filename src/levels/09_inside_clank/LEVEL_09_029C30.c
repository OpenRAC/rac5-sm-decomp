typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_00218EF0;
extern int func_123000(int);
void func_029C30(void)
{
    int value = func_123000((int)0x03EB6DAEu);
    D_00218EF0.value = value;
    if (value == 0)
        D_00218EF0.limit = 0x7fffffff;
}