/* LEVEL_07:0x16D848 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_0021BBAC;
extern int D_0021BBB0;
extern int D_0021BBB4;
extern int D_0021BBB8;
extern int D_0021BBBC;
extern int D_0021BBC0;
extern int D_002AD720;
extern int D_002AD6FC;
extern int D_002AD6E8;
extern int D_002AD7B0;

int func_10D2F0(int key);
int func_0FD900(int key);

void func_16D848(void)
{
    if (D_0021BBAC == -1) {
        D_0021BBAC = func_10D2F0((D_002AD720 << 16) | 0x800030C5);
    }
    if (D_0021BBB0 == -1) {
        D_0021BBB0 = func_10D2F0((D_002AD6FC << 16) | 0x80003045);
    }
    if (D_0021BBB4 == -1) {
        D_0021BBB4 = func_10D2F0((D_002AD6E8 << 16) | 0x800030C5);
    }
    if (D_0021BBB8 == -1) {
        D_0021BBB8 = func_10D2F0((D_002AD6E8 << 16) | 0x88003045);
    }
    if (D_0021BBBC == -1) {
        D_0021BBBC = func_10D2F0((D_002AD7B0 << 16) | 0x90003045);
    }
    if (D_0021BBC0 == -1) {
        D_0021BBC0 = func_0FD900((D_002AD7B0 << 16) | 0x90003045);
    }
}
