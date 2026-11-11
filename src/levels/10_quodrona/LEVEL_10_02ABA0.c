typedef struct { char before[0x150]; int value; int limit; } State;
extern State D_0023AB70;
extern int func_127EC8(int);
void func_02ABA0(void)
{
    int value = func_127EC8((int)0x03EB6DAEu);
    D_0023AB70.value = value;
    if (value == 0)
        D_0023AB70.limit = 0x7fffffff;
}