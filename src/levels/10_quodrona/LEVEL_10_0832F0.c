/* LEVEL_10:0x0832F0 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001FF200;
extern int D_001FF1FC;

int func_127EC8(int a0);
int func_0A3B18(void);

void func_0832F0(int a0, int *a1)
{
    if (D_001FF200 == 0) {
        D_001FF200 = 1;
        D_001FF1FC = func_127EC8(0x26215A62);
    }
    if ((func_0A3B18() & 7) == 1) {
        *a1 = D_001FF1FC;
    }
}
