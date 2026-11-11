extern int D_00240270[];
extern void func_09CBD8(void);
extern void func_09CB18(void);
extern void func_09CE38(void);

void func_09CB78(void)
{
    if (D_00240270[5] == 0 && D_00240270[12] == 0) {
        if (D_00240270[21] == 0) *((char *)D_00240270 + 0x2c) = 0;
    } else {
        func_09CBD8();
        func_09CB18();
        func_09CE38();
    }
}
