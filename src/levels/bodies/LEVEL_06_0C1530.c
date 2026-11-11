/* LEVEL_06:0x0C1530 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001EFBC0;
extern int D_001EFAA0;

int func_019068(int a);
int func_0B6630(void);
extern int func_0B7380(int a0);
extern int func_0B6D00(int a, int b);

void func_0C1530(void)
{
    if (D_001EFBC0 != 0) {
        if (func_019068(6) != 0) {
            if (func_0B6630() == 56) {
                return;
            }
        }
    }
    D_001EFAA0 = 1;
    if (func_019068(6) != 0) {
        func_0B7380(56);
    } else {
        func_0B6D00(56, 0);
    }
}
