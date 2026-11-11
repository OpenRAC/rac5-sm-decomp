typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_003E2F40;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_170D78(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_003E2F40.value = value;
    if (value == 0)
        D_003E2F40.limit = 0x7fffffff;
}