typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_002E3118;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_137678(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_002E3118.value = value;
    if (value == 0)
        D_002E3118.limit = 0x7fffffff;
}