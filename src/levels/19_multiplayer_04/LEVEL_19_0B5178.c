/* LEVEL_19:0x0B5178 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001AFEB8;
extern int D_001AFD98;

int func_0188D8(int a);
int func_0AA6F8(void);
extern int func_0AB7E0(int a0);
extern int func_0AB0E0(int a, int b);

void func_0B5178(void)
{
    if (D_001AFEB8 != 0) {
        if (func_0188D8(6) != 0) {
            if (func_0AA6F8() == 56) {
                return;
            }
        }
    }
    D_001AFD98 = 1;
    if (func_0188D8(6) != 0) {
        func_0AB7E0(56);
    } else {
        func_0AB0E0(56, 0);
    }
}
