/* LEVEL_10:0x0C7F30 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00209CC0;
extern int D_00209BA0;
extern int func_019EE8(int a0);
extern int func_0BD078(void);
extern void func_0BDDD0(int a0);
extern void func_0BD748(int a0, int a1);

void func_0C7F30(void)
{
    int r;

    if (D_00209CC0 != 0) {
        r = func_019EE8(6);
        if (r != 0) {
            r = func_0BD078();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00209BA0 = 0;
    r = func_019EE8(6);
    if (r != 0) {
        func_0BDDD0(0x38);
    } else {
        func_0BD748(0x38, 0);
    }
}
