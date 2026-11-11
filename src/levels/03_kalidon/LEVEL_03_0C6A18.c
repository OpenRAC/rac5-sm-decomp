/* LEVEL_03:0x0C6A18 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00219340;
extern int D_00219220;

int func_01A5D0(int a);
int func_0BBB18(void);
extern int func_0BC868(int a0);
extern int func_0BC1E8(int a, int b);

void func_0C6A18(void)
{
    if (D_00219340 != 0) {
        if (func_01A5D0(6) != 0) {
            if (func_0BBB18() == 56) {
                return;
            }
        }
    }
    D_00219220 = 1;
    if (func_01A5D0(6) != 0) {
        func_0BC868(56);
    } else {
        func_0BC1E8(56, 0);
    }
}
