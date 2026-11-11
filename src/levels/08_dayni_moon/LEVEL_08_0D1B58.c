/* LEVEL_08:0x0D1B58 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00249B80;
extern int D_00249A60;

int func_01B1E0(int a);
int func_0C6C50(void);
extern int func_0C79A8(int a0);
extern int func_0C7320(int a, int b);

void func_0D1B58(void)
{
    if (D_00249B80 != 0) {
        if (func_01B1E0(6) != 0) {
            if (func_0C6C50() == 56) {
                return;
            }
        }
    }
    D_00249A60 = 1;
    if (func_01B1E0(6) != 0) {
        func_0C79A8(56);
    } else {
        func_0C7320(56, 0);
    }
}
