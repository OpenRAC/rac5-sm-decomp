typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_001E05F0;
extern int func_107538(int);
void func_0285B8(void)
{
    int value = func_107538((int)0x03EB6DAEu);
    D_001E05F0.value = value;
    if (value == 0)
        D_001E05F0.limit = 0x7fffffff;
}