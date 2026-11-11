/* LEVEL_24:0x0C04F8 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001D1940;
extern int D_001D1820;

int func_018E58(int a);
int func_0B55F0(void);
extern int func_0B6348(int a0);
extern int func_0B5CC0(int a, int b);

void func_0C04F8(void)
{
    if (D_001D1940 != 0) {
        if (func_018E58(6) != 0) {
            if (func_0B55F0() == 56) {
                return;
            }
        }
    }
    D_001D1820 = 1;
    if (func_018E58(6) != 0) {
        func_0B6348(56);
    } else {
        func_0B5CC0(56, 0);
    }
}
