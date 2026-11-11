extern int D_00206D9C;
extern void func_110C88(int);
void func_12A798(void)
{
    int value = D_00206D9C;
    if (value != 0) {
        func_110C88(value);
        D_00206D9C = 0;
    }
}