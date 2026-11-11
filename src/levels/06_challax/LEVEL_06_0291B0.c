typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_0021E4F0;
extern int func_1206C0(int);
void func_0291B0(void)
{
    int value = func_1206C0((int)0x03EB6DAEu);
    D_0021E4F0.value = value;
    if (value == 0)
        D_0021E4F0.limit = 0x7fffffff;
}