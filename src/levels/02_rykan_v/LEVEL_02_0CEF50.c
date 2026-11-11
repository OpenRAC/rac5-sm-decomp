/* LEVEL_02:0x0CEF50 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_00215BCC;
extern void func_13BA90(int *p, int a1);

void func_0CEF50(int *p)
{
    if (D_00215BCC == 1) {
        func_13BA90(p, 8);
    } else {
        func_13BA90(p, 0x1D);
    }
}
