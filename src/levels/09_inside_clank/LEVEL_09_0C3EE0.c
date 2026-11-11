/* LEVEL_09:0x0C3EE0 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001EAAC0;
extern int D_001EA9A0;

int func_019C58(int a);
int func_0B8FE0(void);
extern int func_0B9D30(int a0);
extern int func_0B96B0(int a, int b);

void func_0C3EE0(void)
{
    if (D_001EAAC0 != 0) {
        if (func_019C58(6) != 0) {
            if (func_0B8FE0() == 56) {
                return;
            }
        }
    }
    D_001EA9A0 = 1;
    if (func_019C58(6) != 0) {
        func_0B9D30(56);
    } else {
        func_0B96B0(56, 0);
    }
}
