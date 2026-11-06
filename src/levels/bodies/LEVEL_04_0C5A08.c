extern unsigned char D_00217024;
extern char *D_0020D12C;
extern unsigned char D_0021FC09;
extern void func_13F720(int);
extern void func_027968(void);

void func_0C5A08(void)
{
    if (D_00217024 != 0)
        func_13F720(*(int *)(D_0020D12C + 0x1c6c));
    func_027968();
    D_0021FC09 = 0;
}
