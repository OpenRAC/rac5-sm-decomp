/* LEVEL_19:0x1420A0 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001BEA4C;
extern int D_001BEA50;
extern int D_001BEA54;
extern int D_001BEA58;
extern int D_001BEA5C;
extern int D_001BEA60;
extern int D_0024E420;
extern int D_0024E3FC;
extern int D_0024E3E8;
extern int D_0024E4B0;

int func_0ED5B8(int key);
int func_0E42D0(int key);

void func_1420A0(void)
{
    if (D_001BEA4C == -1) {
        D_001BEA4C = func_0ED5B8((D_0024E420 << 16) | 0x800030C5);
    }
    if (D_001BEA50 == -1) {
        D_001BEA50 = func_0ED5B8((D_0024E3FC << 16) | 0x80003045);
    }
    if (D_001BEA54 == -1) {
        D_001BEA54 = func_0ED5B8((D_0024E3E8 << 16) | 0x800030C5);
    }
    if (D_001BEA58 == -1) {
        D_001BEA58 = func_0ED5B8((D_0024E3E8 << 16) | 0x88003045);
    }
    if (D_001BEA5C == -1) {
        D_001BEA5C = func_0ED5B8((D_0024E4B0 << 16) | 0x90003045);
    }
    if (D_001BEA60 == -1) {
        D_001BEA60 = func_0E42D0((D_0024E4B0 << 16) | 0x90003045);
    }
}
