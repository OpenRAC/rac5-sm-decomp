/* LEVEL_02:0x17C5B8 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_0021C7BC;
extern int D_0021C7C0;
extern int D_0021C7C4;
extern int D_0021C7C8;
extern int D_0021C7CC;
extern int D_0021C7D0;
extern int D_002AF320;
extern int D_002AF2FC;
extern int D_002AF2E8;
extern int D_002AF3B0;

int func_10FF68(int key);
int func_102CB0(int key);

void func_17C5B8(void)
{
    if (D_0021C7BC == -1) {
        D_0021C7BC = func_10FF68((D_002AF320 << 16) | 0x800030C5);
    }
    if (D_0021C7C0 == -1) {
        D_0021C7C0 = func_10FF68((D_002AF2FC << 16) | 0x80003045);
    }
    if (D_0021C7C4 == -1) {
        D_0021C7C4 = func_10FF68((D_002AF2E8 << 16) | 0x800030C5);
    }
    if (D_0021C7C8 == -1) {
        D_0021C7C8 = func_10FF68((D_002AF2E8 << 16) | 0x88003045);
    }
    if (D_0021C7CC == -1) {
        D_0021C7CC = func_10FF68((D_002AF3B0 << 16) | 0x90003045);
    }
    if (D_0021C7D0 == -1) {
        D_0021C7D0 = func_102CB0((D_002AF3B0 << 16) | 0x90003045);
    }
}
