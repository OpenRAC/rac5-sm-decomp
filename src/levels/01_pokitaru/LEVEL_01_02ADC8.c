typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_00231770;
extern int func_12A068(int);
void func_02ADC8(void)
{
    int value = func_12A068((int)0x03EB6DAEu);
    D_00231770.value = value;
    if (value == 0)
        D_00231770.limit = 0x7fffffff;
}