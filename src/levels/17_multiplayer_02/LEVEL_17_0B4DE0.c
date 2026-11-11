/* LEVEL_17:0x0B4DE0 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001A2338;
extern int D_001A2218;

int func_018558(int a);
int func_0AA360(void);
extern int func_0AB448(int a0);
extern int func_0AAD48(int a, int b);

void func_0B4DE0(void)
{
    if (D_001A2338 != 0) {
        if (func_018558(6) != 0) {
            if (func_0AA360() == 56) {
                return;
            }
        }
    }
    D_001A2218 = 1;
    if (func_018558(6) != 0) {
        func_0AB448(56);
    } else {
        func_0AAD48(56, 0);
    }
}
