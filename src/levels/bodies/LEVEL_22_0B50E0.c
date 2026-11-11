/* LEVEL_22:0x0B50E0 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00160040;
extern int D_0015FF20;

int func_016E80(int a);
int func_0AA1D8(void);
extern int func_0AAF30(int a0);
extern int func_0AA8A8(int a, int b);

void func_0B50E0(void)
{
    if (D_00160040 != 0) {
        if (func_016E80(6) != 0) {
            if (func_0AA1D8() == 56) {
                return;
            }
        }
    }
    D_0015FF20 = 1;
    if (func_016E80(6) != 0) {
        func_0AAF30(56);
    } else {
        func_0AA8A8(56, 0);
    }
}
