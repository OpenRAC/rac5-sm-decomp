/* LEVEL_08:0x17D9D8 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_0025095C;
extern int D_00250960;
extern int D_00250964;
extern int D_00250968;
extern int D_0025096C;
extern int D_00250970;
extern int D_002E70A0;
extern int D_002E707C;
extern int D_002E7068;
extern int D_002E7130;

int func_11AA40(int key);
int func_108548(int key);

void func_17D9D8(void)
{
    if (D_0025095C == -1) {
        D_0025095C = func_11AA40((D_002E70A0 << 16) | 0x800030C5);
    }
    if (D_00250960 == -1) {
        D_00250960 = func_11AA40((D_002E707C << 16) | 0x80003045);
    }
    if (D_00250964 == -1) {
        D_00250964 = func_11AA40((D_002E7068 << 16) | 0x800030C5);
    }
    if (D_00250968 == -1) {
        D_00250968 = func_11AA40((D_002E7068 << 16) | 0x88003045);
    }
    if (D_0025096C == -1) {
        D_0025096C = func_11AA40((D_002E7130 << 16) | 0x90003045);
    }
    if (D_00250970 == -1) {
        D_00250970 = func_108548((D_002E7130 << 16) | 0x90003045);
    }
}
