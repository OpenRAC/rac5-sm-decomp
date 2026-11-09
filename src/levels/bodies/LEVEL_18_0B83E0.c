/* LEVEL_18:0x0B83E0 -- placement copy of LEVEL_16_0B9408.c: stores two derived words into a global record and stores two helper results in globals. */
extern int D_001A2F34;
extern char D_001A2F40[];
extern char D_001B0700[];
extern int D_001B0918;
extern int D_001B091C;
extern int func_106CB8(int a0, int a1);

void func_0B83E0(void)
{
    char *p;
    int r;

    p = D_001B0700;
    *(int *)(p + 0x10) = D_001A2F34 + 0x864;
    *(char **)(p + 0xB0) = D_001A2F40;
    r = func_106CB8(0x99D5E917, 8);
    D_001B0918 = r;
    r = func_106CB8(0x03E74EAB, 8);
    D_001B091C = r;
}
