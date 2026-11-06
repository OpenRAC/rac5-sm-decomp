typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001E0470;
extern int func_106E98(int);
void func_028810(void)
{
    int value = func_106E98((int)0x03EB6DAEu);
    D_001E0470.value = value;
    if (value == 0)
        D_001E0470.limit = 0x7fffffff;
}