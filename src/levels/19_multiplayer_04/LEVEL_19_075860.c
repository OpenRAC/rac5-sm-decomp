/* LEVEL_19:0x075860 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001A53B0;
extern int D_001A53AC;

int func_107538(int a0);
int func_0914F0(void);

void func_075860(int a0, int *a1)
{
    if (D_001A53B0 == 0) {
        D_001A53B0 = 1;
        D_001A53AC = func_107538(0x26215A62);
    }
    if ((func_0914F0() & 7) == 1) {
        *a1 = D_001A53AC;
    }
}
