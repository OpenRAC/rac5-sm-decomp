typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001D1770;
extern int func_106410(int);
void func_028190(void)
{
    int value = func_106410((int)0x03EB6DAEu);
    D_001D1770.value = value;
    if (value == 0)
        D_001D1770.limit = 0x7fffffff;
}