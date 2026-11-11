/* LEVEL_04:0x0CC448 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_0021A180;
extern int D_0021A060;

int func_01A4E8(int a);
int func_0C1540(void);
extern int func_0C2298(int a0);
extern int func_0C1C10(int a, int b);

void func_0CC448(void)
{
    if (D_0021A180 != 0) {
        if (func_01A4E8(6) != 0) {
            if (func_0C1540() == 56) {
                return;
            }
        }
    }
    D_0021A060 = 1;
    if (func_01A4E8(6) != 0) {
        func_0C2298(56);
    } else {
        func_0C1C10(56, 0);
    }
}
