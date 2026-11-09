/* LEVEL_19:0x0B8CE0 -- placement copy of LEVEL_16_0B9408.c: stores two derived words into a global record and stores two helper results in globals. */
extern int D_001A2C34;
extern char D_001A2C40[];
extern char D_001B0400[];
extern int D_001B0618;
extern int D_001B061C;
extern int func_1086A8(int a0, int a1);

void func_0B8CE0(void)
{
    char *p;
    int r;

    p = D_001B0400;
    *(int *)(p + 0x10) = D_001A2C34 + 0x864;
    *(char **)(p + 0xB0) = D_001A2C40;
    r = func_1086A8(0x99D5E917, 8);
    D_001B0618 = r;
    r = func_1086A8(0x03E74EAB, 8);
    D_001B061C = r;
}
