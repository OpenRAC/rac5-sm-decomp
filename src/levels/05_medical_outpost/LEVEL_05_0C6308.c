/* LEVEL_05:0x0C6308 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001EFF8C;
extern unsigned char D_001EFF30;
extern int D_001EFF94;
extern void func_131058(int *p, int a1);

void func_0C6308(int *p)
{
    if (D_001EFF8C == 1) {
        func_131058(p, 10);
    } else if (D_001EFF30 != 0) {
        D_001EFF94 = 0x1D;
        func_131058(p, 0x13);
    } else {
        func_131058(p, 0x1E);
    }
}
