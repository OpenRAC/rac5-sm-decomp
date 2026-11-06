extern void func_074898(void);
extern void func_078D60(void);
extern void func_074FF0(void);
extern void func_074170(void);
extern void func_078D18(void);
extern void func_0751A8(void);

void func_079468(long long unused, long long other, int target)
{
    if (target == (int)(void *)func_074898) {
        func_074170();
    } else if (target == (int)(void *)func_078D60) {
        func_078D18();
    } else if (target == (int)(void *)func_074FF0) {
        func_0751A8();
    }
}
