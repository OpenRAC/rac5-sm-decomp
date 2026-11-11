/* LEVEL_17:0x140C38 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001B0EC4;
extern int D_001B0EC8;
extern int D_001B0ECC;
extern int D_001B0ED0;
extern int D_001B0ED4;
extern int D_001B0ED8;
extern int D_0023F5A0;
extern int D_0023F57C;
extern int D_0023F568;
extern int D_0023F630;

int func_0EC910(int key);
int func_0E4B38(int key);

void func_140C38(void)
{
    if (D_001B0EC4 == -1) {
        D_001B0EC4 = func_0EC910((D_0023F5A0 << 16) | 0x800030C5);
    }
    if (D_001B0EC8 == -1) {
        D_001B0EC8 = func_0EC910((D_0023F57C << 16) | 0x80003045);
    }
    if (D_001B0ECC == -1) {
        D_001B0ECC = func_0EC910((D_0023F568 << 16) | 0x800030C5);
    }
    if (D_001B0ED0 == -1) {
        D_001B0ED0 = func_0EC910((D_0023F568 << 16) | 0x88003045);
    }
    if (D_001B0ED4 == -1) {
        D_001B0ED4 = func_0EC910((D_0023F630 << 16) | 0x90003045);
    }
    if (D_001B0ED8 == -1) {
        D_001B0ED8 = func_0E4B38((D_0023F630 << 16) | 0x90003045);
    }
}
