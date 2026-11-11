/* LEVEL_21:0x0A7278 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00155940;
extern int D_00155820;

int func_016A50(int a);
int func_09C378(void);
extern int func_09D0C8(int a0);
extern int func_09CA48(int a, int b);

void func_0A7278(void)
{
    if (D_00155940 != 0) {
        if (func_016A50(6) != 0) {
            if (func_09C378() == 56) {
                return;
            }
        }
    }
    D_00155820 = 1;
    if (func_016A50(6) != 0) {
        func_09D0C8(56);
    } else {
        func_09CA48(56, 0);
    }
}
