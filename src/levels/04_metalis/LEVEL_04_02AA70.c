typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_0024BF70;
extern int func_1364E8(int);
void func_02AA70(void)
{
    int value = func_1364E8((int)0x03EB6DAEu);
    D_0024BF70.value = value;
    if (value == 0)
        D_0024BF70.limit = 0x7fffffff;
}