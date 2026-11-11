extern int func_080028(void);
extern void func_07FF98(void *, long long);
extern void func_0803B8(void);
extern void func_0805E0(long long);
extern void *D_00106F90;

void func_080598(long long value)
{
    if (func_080028() != 0) {
        func_07FF98(D_00106F90, value);
        func_0803B8();
        func_0805E0(value);
    }
}
