/* LEVEL_06:0x157D60 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001F6224;
extern int D_001F6228;
extern int D_001F622C;
extern int D_001F6230;
extern int D_001F6234;
extern int D_001F6238;
extern int D_00284BA0;
extern int D_00284B7C;
extern int D_00284B68;
extern int D_00284C30;

int func_102E78(int key);
int func_0F5BC0(int key);

void func_157D60(void)
{
    if (D_001F6224 == -1) {
        D_001F6224 = func_102E78((D_00284BA0 << 16) | 0x800030C5);
    }
    if (D_001F6228 == -1) {
        D_001F6228 = func_102E78((D_00284B7C << 16) | 0x80003045);
    }
    if (D_001F622C == -1) {
        D_001F622C = func_102E78((D_00284B68 << 16) | 0x800030C5);
    }
    if (D_001F6230 == -1) {
        D_001F6230 = func_102E78((D_00284B68 << 16) | 0x88003045);
    }
    if (D_001F6234 == -1) {
        D_001F6234 = func_102E78((D_00284C30 << 16) | 0x90003045);
    }
    if (D_001F6238 == -1) {
        D_001F6238 = func_0F5BC0((D_00284C30 << 16) | 0x90003045);
    }
}
