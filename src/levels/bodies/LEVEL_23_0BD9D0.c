/* LEVEL_23:0x0BD9D0 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001D40C0;
extern int D_001D3FA0;

int func_019378(int a);
int func_0B2AC8(void);
extern int func_0B3820(int a0);
extern int func_0B3198(int a, int b);

void func_0BD9D0(void)
{
    if (D_001D40C0 != 0) {
        if (func_019378(6) != 0) {
            if (func_0B2AC8() == 56) {
                return;
            }
        }
    }
    D_001D3FA0 = 1;
    if (func_019378(6) != 0) {
        func_0B3820(56);
    } else {
        func_0B3198(56, 0);
    }
}
