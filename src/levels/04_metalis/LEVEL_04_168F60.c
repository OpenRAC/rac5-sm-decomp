typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_003AE388;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_168F60(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_003AE388.value = value;
    if (value == 0)
        D_003AE388.limit = 0x7fffffff;
}