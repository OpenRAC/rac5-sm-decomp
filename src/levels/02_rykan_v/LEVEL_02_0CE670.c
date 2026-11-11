/* LEVEL_02:0x0CE670 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_00215BCC;
extern unsigned char D_00215B70;
extern int D_00215BD4;
extern void func_13BA90(int *p, int a1);

void func_0CE670(int *p)
{
    if (D_00215BCC == 1) {
        func_13BA90(p, 10);
    } else if (D_00215B70 != 0) {
        D_00215BD4 = 0x1D;
        func_13BA90(p, 0x13);
    } else {
        func_13BA90(p, 0x1E);
    }
}
