typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_0037F948;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_1538F8(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_0037F948.value = value;
    if (value == 0)
        D_0037F948.limit = 0x7fffffff;
}