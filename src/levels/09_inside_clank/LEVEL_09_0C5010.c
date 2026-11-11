/* LEVEL_09:0x0C5010 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001EAA0C;
extern unsigned char D_001EA9B0;
extern int D_001EAA14;
extern void func_12E678(int *p, int a1);

void func_0C5010(int *p)
{
    if (D_001EAA0C == 1) {
        func_12E678(p, 10);
    } else if (D_001EA9B0 != 0) {
        D_001EAA14 = 0x1D;
        func_12E678(p, 0x13);
    } else {
        func_12E678(p, 0x1E);
    }
}
