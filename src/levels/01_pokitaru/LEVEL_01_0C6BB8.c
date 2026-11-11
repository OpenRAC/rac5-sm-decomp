/* LEVEL_01:0x0C6BB8 -- reads a global flag and calls two status helpers, clears a global word, and calls a helper chosen by a second helper's result. */
extern unsigned char D_00200CC0;
extern int D_00200BA0;
extern int func_01A868(int a0);
extern int func_0BBD30(void);
extern int func_0BCA80(int a0);
extern int func_0BC400(int a, int b);

void func_0C6BB8(void)
{
    int r;

    if (D_00200CC0 != 0) {
        r = func_01A868(6);
        if (r != 0) {
            r = func_0BBD30();
            if (r == 0x38) {
                return;
            }
        }
    }
    D_00200BA0 = 0;
    r = func_01A868(6);
    if (r != 0) {
        func_0BCA80(0x38);
    } else {
        func_0BC400(0x38, 0);
    }
}
