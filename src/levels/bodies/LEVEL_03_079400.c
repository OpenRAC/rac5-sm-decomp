extern void func_074898(void);
extern void func_078D60(void);
extern void func_074FF0(void);
extern long long func_0741E8(void);
extern long long func_078CF8(void);
extern long long func_0751F0(void);

long long func_079400(long long unused, int target)
{
    if (target == (int)(void *)func_074898) {
        return func_0741E8();
    }
    if (target == (int)(void *)func_078D60) {
        return func_078CF8();
    }
    if (target == (int)(void *)func_074FF0) {
        return func_0751F0();
    }
    return 0;
}
