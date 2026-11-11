/* LEVEL_04:0x086260 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_0020F6C0;
extern int D_0020F6BC;

int func_1364E8(int a0);
int func_0A7C10(void);

void func_086260(int a0, int *a1)
{
    if (D_0020F6C0 == 0) {
        D_0020F6C0 = 1;
        D_0020F6BC = func_1364E8(0x26215A62);
    }
    if ((func_0A7C10() & 7) == 1) {
        *a1 = D_0020F6BC;
    }
}
