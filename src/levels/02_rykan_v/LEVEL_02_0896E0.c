/* LEVEL_02:0x0896E0 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_0020B1C0;
extern int D_0020B1BC;

int func_130418(int a0);
int func_0A9310(void);

void func_0896E0(int a0, int *a1)
{
    if (D_0020B1C0 == 0) {
        D_0020B1C0 = 1;
        D_0020B1BC = func_130418(0x26215A62);
    }
    if ((func_0A9310() & 7) == 1) {
        *a1 = D_0020B1BC;
    }
}
