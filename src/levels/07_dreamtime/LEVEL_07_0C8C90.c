/* LEVEL_07:0x0C8C90 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00214FC0;
extern int D_00214EA0;

int func_01AF28(int a);
int func_0BDD90(void);
extern int func_0BEAE0(int a0);
extern int func_0BE460(int a, int b);

void func_0C8C90(void)
{
    if (D_00214FC0 != 0) {
        if (func_01AF28(6) != 0) {
            if (func_0BDD90() == 56) {
                return;
            }
        }
    }
    D_00214EA0 = 1;
    if (func_01AF28(6) != 0) {
        func_0BEAE0(56);
    } else {
        func_0BE460(56, 0);
    }
}
