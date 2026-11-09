/* LEVEL_02:0x0CD4C8 -- placement copy of LEVEL_01_0C6BB8.c: reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00215C80;
extern int D_00215B60;
extern int func_01B1C8(int a0);
extern int func_0C2640(void);
extern void func_0C3390(int a0);
extern void func_0C2D10(int a0, int a1);

void func_0CD4C8(void)
{
    int r;

    if (D_00215C80 != 0) {
        r = func_01B1C8(6);
        if (r != 0) {
            r = func_0C2640();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00215B60 = 0;
    r = func_01B1C8(6);
    if (r != 0) {
        func_0C3390(0x38);
    } else {
        func_0C2D10(0x38, 0);
    }
}
