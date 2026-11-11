typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_0037B220;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_151710(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_0037B220.value = value;
    if (value == 0)
        D_0037B220.limit = 0x7fffffff;
}