/* LEVEL_18:0x140CF8 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001BED5C;
extern int D_001BED60;
extern int D_001BED64;
extern int D_001BED68;
extern int D_001BED6C;
extern int D_001BED70;
extern int D_0024E620;
extern int D_0024E5FC;
extern int D_0024E5E8;
extern int D_0024E6B0;

int func_0EB7A8(int key);
int func_0E39D0(int key);

void func_140CF8(void)
{
    if (D_001BED5C == -1) {
        D_001BED5C = func_0EB7A8((D_0024E620 << 16) | 0x800030C5);
    }
    if (D_001BED60 == -1) {
        D_001BED60 = func_0EB7A8((D_0024E5FC << 16) | 0x80003045);
    }
    if (D_001BED64 == -1) {
        D_001BED64 = func_0EB7A8((D_0024E5E8 << 16) | 0x800030C5);
    }
    if (D_001BED68 == -1) {
        D_001BED68 = func_0EB7A8((D_0024E5E8 << 16) | 0x88003045);
    }
    if (D_001BED6C == -1) {
        D_001BED6C = func_0EB7A8((D_0024E6B0 << 16) | 0x90003045);
    }
    if (D_001BED70 == -1) {
        D_001BED70 = func_0E39D0((D_0024E6B0 << 16) | 0x90003045);
    }
}
