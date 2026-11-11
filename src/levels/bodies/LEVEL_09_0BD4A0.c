extern unsigned char D_001E7964;
extern char *D_001DDDAC;
extern unsigned char D_001F0549;
extern int func_12C238(int);
extern void func_026CE0(void);

void func_0BD4A0(void)
{
    if (D_001E7964 != 0)
        func_12C238(*(int *)(D_001DDDAC + 0x1c6c));
    func_026CE0();
    D_001F0549 = 0;
}
