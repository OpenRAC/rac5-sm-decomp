/* LEVEL_01:0x082CD8 -- latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001F6200;
extern int D_001F61FC;

int func_12A068(int a0);
int func_0A2A00(void);

void func_082CD8(int a0, int *a1)
{
    if (D_001F6200 == 0) {
        D_001F6200 = 1;
        D_001F61FC = func_12A068(0x26215A62);
    }
    if ((func_0A2A00() & 7) == 1) {
        *a1 = D_001F61FC;
    }
}
