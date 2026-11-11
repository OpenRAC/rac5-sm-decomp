/* LEVEL_20:0x09FDD0 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00111418;
extern int D_001112F8;

int func_016990(int a);
int func_095350(void);
extern int func_096438(int a0);
extern int func_095D38(int a, int b);

void func_09FDD0(void)
{
    if (D_00111418 != 0) {
        if (func_016990(6) != 0) {
            if (func_095350() == 56) {
                return;
            }
        }
    }
    D_001112F8 = 1;
    if (func_016990(6) != 0) {
        func_096438(56);
    } else {
        func_095D38(56, 0);
    }
}
