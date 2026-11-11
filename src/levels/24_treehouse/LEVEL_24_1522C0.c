/* LEVEL_24:0x1522C0 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001D858C;
extern int D_001D8590;
extern int D_001D8594;
extern int D_001D8598;
extern int D_001D859C;
extern int D_001D85A0;
extern int D_00263CE0;
extern int D_00263CBC;
extern int D_00263CA8;
extern int D_00263D70;

int func_1019C8(int key);
int func_0F4710(int key);

void func_1522C0(void)
{
    if (D_001D858C == -1) {
        D_001D858C = func_1019C8((D_00263CE0 << 16) | 0x800030C5);
    }
    if (D_001D8590 == -1) {
        D_001D8590 = func_1019C8((D_00263CBC << 16) | 0x80003045);
    }
    if (D_001D8594 == -1) {
        D_001D8594 = func_1019C8((D_00263CA8 << 16) | 0x800030C5);
    }
    if (D_001D8598 == -1) {
        D_001D8598 = func_1019C8((D_00263CA8 << 16) | 0x88003045);
    }
    if (D_001D859C == -1) {
        D_001D859C = func_1019C8((D_00263D70 << 16) | 0x90003045);
    }
    if (D_001D85A0 == -1) {
        D_001D85A0 = func_0F4710((D_00263D70 << 16) | 0x90003045);
    }
}
