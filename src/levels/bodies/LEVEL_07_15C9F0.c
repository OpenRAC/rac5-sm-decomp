typedef struct { char before[0x1208]; int value; int limit; } State;
extern State D_003A93F0;
extern int GLOBALWAD_FindGlobalSound__FUi(int);
void func_15C9F0(void)
{
    int value = GLOBALWAD_FindGlobalSound__FUi((int)0x03EB6DAEu);
    D_003A93F0.value = value;
    if (value == 0)
        D_003A93F0.limit = 0x7fffffff;
}