typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_00137DF0;
extern int func_0DEBE0(int);
void func_025318(void)
{
    int value = func_0DEBE0((int)0x03EB6DAEu);
    D_00137DF0.value = value;
    if (value == 0)
        D_00137DF0.limit = 0x7fffffff;
}