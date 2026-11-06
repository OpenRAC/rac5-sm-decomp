extern unsigned char D_001D0F64;
extern char *D_001C73AC;
extern unsigned char D_001D9B49;
extern void func_124A18(int);
extern void func_025A30(void);

void func_0B6F90(void)
{
    if (D_001D0F64 != 0)
        func_124A18(*(int *)(D_001C73AC + 0x1c6c));
    func_025A30();
    D_001D9B49 = 0;
}
