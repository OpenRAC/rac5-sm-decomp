/* LEVEL_01:0x0C7D60 -- picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_00200C0C;
extern unsigned char D_00200BB0;
extern int D_00200C14;
extern void func_1356E0(int *p, int a1);

void func_0C7D60(int *p)
{
    if (D_00200C0C == 1) {
        func_1356E0(p, 10);
    } else if (D_00200BB0 != 0) {
        D_00200C14 = 0x1D;
        func_1356E0(p, 0x13);
    } else {
        func_1356E0(p, 0x1E);
    }
}
