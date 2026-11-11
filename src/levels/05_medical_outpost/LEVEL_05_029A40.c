typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_0021D470;
extern int func_1259E0(int);
void func_029A40(void)
{
    int value = func_1259E0((int)0x03EB6DAEu);
    D_0021D470.value = value;
    if (value == 0)
        D_0021D470.limit = 0x7fffffff;
}