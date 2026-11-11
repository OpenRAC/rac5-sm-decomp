/* LEVEL_23:0x159E48 -- placement copy of LEVEL_01_168A08.c: lazily creates the six cached handles. */

extern int D_001DAD9C;
extern int D_001DADA0;
extern int D_001DADA4;
extern int D_001DADA8;
extern int D_001DADAC;
extern int D_001DADB0;
extern int D_00269260;
extern int D_0026923C;
extern int D_00269228;
extern int D_002692F0;

int func_0FCCA0(int key);
int func_0EF9E8(int key);

void func_159E48(void)
{
    if (D_001DAD9C == -1) {
        D_001DAD9C = func_0FCCA0((D_00269260 << 16) | 0x800030C5);
    }
    if (D_001DADA0 == -1) {
        D_001DADA0 = func_0FCCA0((D_0026923C << 16) | 0x80003045);
    }
    if (D_001DADA4 == -1) {
        D_001DADA4 = func_0FCCA0((D_00269228 << 16) | 0x800030C5);
    }
    if (D_001DADA8 == -1) {
        D_001DADA8 = func_0FCCA0((D_00269228 << 16) | 0x88003045);
    }
    if (D_001DADAC == -1) {
        D_001DADAC = func_0FCCA0((D_002692F0 << 16) | 0x90003045);
    }
    if (D_001DADB0 == -1) {
        D_001DADB0 = func_0EF9E8((D_002692F0 << 16) | 0x90003045);
    }
}
