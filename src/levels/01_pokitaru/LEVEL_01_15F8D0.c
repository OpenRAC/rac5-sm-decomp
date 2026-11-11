typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_00393C08;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_15F8D0(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_00393C08.value = value;
    if (value == 0)
        D_00393C08.limit = 0x7fffffff;
}