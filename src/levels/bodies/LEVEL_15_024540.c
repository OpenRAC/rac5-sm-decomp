typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001798F0;
extern int func_0EDE90(int);
void func_024540(void)
{
    int value = func_0EDE90((int)0x03EB6DAEu);
    D_001798F0.value = value;
    if (value == 0)
        D_001798F0.limit = 0x7fffffff;
}