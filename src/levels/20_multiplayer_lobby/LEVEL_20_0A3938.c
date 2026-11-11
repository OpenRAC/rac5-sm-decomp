/* LEVEL_20:0x0A3938 -- placement copy of LEVEL_16_0B9408.c: stores two derived words into a global record and stores two helper results in globals. */
extern int D_00104194;
extern char D_001041A0[];
extern char D_00111960[];
extern int D_00111B78;
extern int D_00111B7C;
extern int func_0DFD50(int a0, int a1);

void func_0A3938(void)
{
    char *p;
    int r;

    p = D_00111960;
    *(int *)(p + 0x10) = D_00104194 + 0x864;
    *(char **)(p + 0xB0) = D_001041A0;
    r = func_0DFD50(0x99D5E917, 8);
    D_00111B78 = r;
    r = func_0DFD50(0x03E74EAB, 8);
    D_00111B7C = r;
}
