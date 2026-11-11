/* LEVEL_10:0x160000 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_002102A4;
extern int D_002102A8;
extern int D_002102AC;
extern int D_002102B0;
extern int D_002102B4;
extern int D_002102B8;
extern int D_002A1220;
extern int D_002A11FC;
extern int D_002A11E8;
extern int D_002A12B0;

int func_10AAC0(int key);
int func_0FC440(int key);

void func_160000(void)
{
    if (D_002102A4 == -1) {
        D_002102A4 = func_10AAC0((D_002A1220 << 16) | 0x800030C5);
    }
    if (D_002102A8 == -1) {
        D_002102A8 = func_10AAC0((D_002A11FC << 16) | 0x80003045);
    }
    if (D_002102AC == -1) {
        D_002102AC = func_10AAC0((D_002A11E8 << 16) | 0x800030C5);
    }
    if (D_002102B0 == -1) {
        D_002102B0 = func_10AAC0((D_002A11E8 << 16) | 0x88003045);
    }
    if (D_002102B4 == -1) {
        D_002102B4 = func_10AAC0((D_002A12B0 << 16) | 0x90003045);
    }
    if (D_002102B8 == -1) {
        D_002102B8 = func_0FC440((D_002A12B0 << 16) | 0x90003045);
    }
}
