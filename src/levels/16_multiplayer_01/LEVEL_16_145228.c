/* LEVEL_16:0x145228 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001BD8FC;
extern int D_001BD900;
extern int D_001BD904;
extern int D_001BD908;
extern int D_001BD90C;
extern int D_001BD910;
extern int D_0024E2A0;
extern int D_0024E27C;
extern int D_0024E268;
extern int D_0024E330;

int func_0ED9E8(int key);
int func_0E5C10(int key);

void func_145228(void)
{
    if (D_001BD8FC == -1) {
        D_001BD8FC = func_0ED9E8((D_0024E2A0 << 16) | 0x800030C5);
    }
    if (D_001BD900 == -1) {
        D_001BD900 = func_0ED9E8((D_0024E27C << 16) | 0x80003045);
    }
    if (D_001BD904 == -1) {
        D_001BD904 = func_0ED9E8((D_0024E268 << 16) | 0x800030C5);
    }
    if (D_001BD908 == -1) {
        D_001BD908 = func_0ED9E8((D_0024E268 << 16) | 0x88003045);
    }
    if (D_001BD90C == -1) {
        D_001BD90C = func_0ED9E8((D_0024E330 << 16) | 0x90003045);
    }
    if (D_001BD910 == -1) {
        D_001BD910 = func_0E5C10((D_0024E330 << 16) | 0x90003045);
    }
}
