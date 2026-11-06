typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001E07F0;
extern int func_105B48(int);
void func_027DC0(void)
{
    int value = func_105B48((int)0x03EB6DAEu);
    D_001E07F0.value = value;
    if (value == 0)
        D_001E07F0.limit = 0x7fffffff;
}