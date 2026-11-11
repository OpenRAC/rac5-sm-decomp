/* LEVEL_09:0x159CF0 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001F1124;
extern int D_001F1128;
extern int D_001F112C;
extern int D_001F1130;
extern int D_001F1134;
extern int D_001F1138;
extern int D_0027F5A0;
extern int D_0027F57C;
extern int D_0027F568;
extern int D_0027F630;

int func_105C98(int key);
int func_0F89E0(int key);

void func_159CF0(void)
{
    if (D_001F1124 == -1) {
        D_001F1124 = func_105C98((D_0027F5A0 << 16) | 0x800030C5);
    }
    if (D_001F1128 == -1) {
        D_001F1128 = func_105C98((D_0027F57C << 16) | 0x80003045);
    }
    if (D_001F112C == -1) {
        D_001F112C = func_105C98((D_0027F568 << 16) | 0x800030C5);
    }
    if (D_001F1130 == -1) {
        D_001F1130 = func_105C98((D_0027F568 << 16) | 0x88003045);
    }
    if (D_001F1134 == -1) {
        D_001F1134 = func_105C98((D_0027F630 << 16) | 0x90003045);
    }
    if (D_001F1138 == -1) {
        D_001F1138 = func_0F89E0((D_0027F630 << 16) | 0x90003045);
    }
}
