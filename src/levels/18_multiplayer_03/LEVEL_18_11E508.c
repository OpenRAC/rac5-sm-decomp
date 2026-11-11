extern long long func_10E7C0(void);
extern void func_10E888(void);
extern int D_001BD018;

int func_11E508(void)
{
    if (func_10E7C0() != 0) {
        func_10E888();
        D_001BD018 = 0;
    }
    return D_001BD018 != 0;
}
