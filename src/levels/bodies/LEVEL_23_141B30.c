/* LEVEL_23:0x141B30 -- placement copy of LEVEL_22_1187D8.c: rebuilds a flag word with fixed bit patterns, runs two helpers on a stack buffer, and stores the second result. */

extern void func_08C368(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern int func_08C540(void *a0);
extern char D_001423A0[];

void func_141B30(int *a0, unsigned int a1)
{
    int buf[4];
    unsigned int m;

    m = (a1 & 0xFFFFFFC3) | 0x18;
    m = (m & 0xFFFFFFFC) | 1;
    func_08C368(buf, m, (unsigned int)D_001423A0, 0x40, 0, -1, 0);
    *a0 = func_08C540(buf);
}
