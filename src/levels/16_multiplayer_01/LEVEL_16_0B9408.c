/* LEVEL_16:0x0B9408 -- stores two derived words into a global record and stores two helper results in globals. */
extern int D_001A1AB4;
extern char D_001A1AC0[];
extern char D_001AF280[];
extern int D_001AF498;
extern int D_001AF49C;
extern int func_108008(int a0, int a1);

void func_0B9408(void)
{
    char *p;
    int r;

    p = D_001AF280;
    *(int *)(p + 0x10) = D_001A1AB4 + 0x864;
    *(char **)(p + 0xB0) = D_001A1AC0;
    r = func_108008(0x99D5E917, 8);
    D_001AF498 = r;
    r = func_108008(0x03E74EAB, 8);
    D_001AF49C = r;
}
