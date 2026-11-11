extern unsigned char D_00238F30;
extern void func_027B40(void);

void func_0177E0(void)
{
    if (D_00238F30 == 0) {
        D_00238F30 = 1;
        func_027B40();
    }
}
