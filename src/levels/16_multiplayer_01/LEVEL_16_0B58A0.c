/* LEVEL_16:0x0B58A0 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001AED38;
extern int D_001AEC18;

int func_018BD8(int a);
int func_0AAE20(void);
extern int func_0ABF08(int a0);
extern int func_0AB808(int a, int b);

void func_0B58A0(void)
{
    if (D_001AED38 != 0) {
        if (func_018BD8(6) != 0) {
            if (func_0AAE20() == 56) {
                return;
            }
        }
    }
    D_001AEC18 = 1;
    if (func_018BD8(6) != 0) {
        func_0ABF08(56);
    } else {
        func_0AB808(56, 0);
    }
}
