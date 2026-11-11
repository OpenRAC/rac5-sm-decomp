extern int D_00276CF0[];
extern void func_0AA970(void);
extern void func_0AA8B0(void);
extern void func_0AAC10(void);

void func_0AA910(void)
{
    if (D_00276CF0[5] == 0 && D_00276CF0[12] == 0) {
        if (D_00276CF0[21] == 0) *((char *)D_00276CF0 + 0x2c) = 0;
    } else {
        func_0AA970();
        func_0AA8B0();
        func_0AAC10();
    }
}
