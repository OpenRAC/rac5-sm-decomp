/* LEVEL_05:0x080360 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001E5580;
extern int D_001E557C;

int func_1259E0(int a0);
int func_0A0FC0(void);

void func_080360(int a0, int *a1)
{
    if (D_001E5580 == 0) {
        D_001E5580 = 1;
        D_001E557C = func_1259E0(0x26215A62);
    }
    if ((func_0A0FC0() & 7) == 1) {
        *a1 = D_001E557C;
    }
}
