typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001FEBF0;
extern int func_11AEE0(int);
void func_028938(void)
{
    int value = func_11AEE0((int)0x03EB6DAEu);
    D_001FEBF0.value = value;
    if (value == 0)
        D_001FEBF0.limit = 0x7fffffff;
}