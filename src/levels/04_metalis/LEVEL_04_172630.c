/* LEVEL_04:0x172630 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_00220E74;
extern int D_00220E78;
extern int D_00220E7C;
extern int D_00220E80;
extern int D_00220E84;
extern int D_00220E88;
extern int D_002B2620;
extern int D_002B25FC;
extern int D_002B25E8;
extern int D_002B26B0;

int func_115EF0(int key);
int func_104038(int key);

void func_172630(void)
{
    if (D_00220E74 == -1) {
        D_00220E74 = func_115EF0((D_002B2620 << 16) | 0x800030C5);
    }
    if (D_00220E78 == -1) {
        D_00220E78 = func_115EF0((D_002B25FC << 16) | 0x80003045);
    }
    if (D_00220E7C == -1) {
        D_00220E7C = func_115EF0((D_002B25E8 << 16) | 0x800030C5);
    }
    if (D_00220E80 == -1) {
        D_00220E80 = func_115EF0((D_002B25E8 << 16) | 0x88003045);
    }
    if (D_00220E84 == -1) {
        D_00220E84 = func_115EF0((D_002B26B0 << 16) | 0x90003045);
    }
    if (D_00220E88 == -1) {
        D_00220E88 = func_104038((D_002B26B0 << 16) | 0x90003045);
    }
}
