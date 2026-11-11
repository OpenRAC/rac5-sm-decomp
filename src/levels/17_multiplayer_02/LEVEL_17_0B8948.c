/* LEVEL_17:0x0B8948 -- placement copy of LEVEL_16_0B9408.c: stores two derived words into a global record and stores two helper results in globals. */
extern int D_001950B4;
extern char D_001950C0[];
extern char D_001A2880[];
extern int D_001A2A98;
extern int D_001A2A9C;
extern int func_107580(int a0, int a1);

void func_0B8948(void)
{
    char *p;
    int r;

    p = D_001A2880;
    *(int *)(p + 0x10) = D_001950B4 + 0x864;
    *(char **)(p + 0xB0) = D_001950C0;
    r = func_107580(0x99D5E917, 8);
    D_001A2A98 = r;
    r = func_107580(0x03E74EAB, 8);
    D_001A2A9C = r;
}
