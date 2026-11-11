extern unsigned char D_001FDB64;
extern char *D_001F3FAC;
extern unsigned char D_00206749;
extern int func_1332A0(int);
extern void func_027CD8(void);

void func_0C01F0(void)
{
    if (D_001FDB64 != 0)
        func_1332A0(*(int *)(D_001F3FAC + 0x1c6c));
    func_027CD8();
    D_00206749 = 0;
}
