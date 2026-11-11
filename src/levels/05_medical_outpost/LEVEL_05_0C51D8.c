/* LEVEL_05:0x0C51D8 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001F0040;
extern int D_001EFF20;

int func_019E00(int a);
int func_0BA2D8(void);
extern int func_0BB028(int a0);
extern int func_0BA9A8(int a, int b);

void func_0C51D8(void)
{
    if (D_001F0040 != 0) {
        if (func_019E00(6) != 0) {
            if (func_0BA2D8() == 56) {
                return;
            }
        }
    }
    D_001EFF20 = 1;
    if (func_019E00(6) != 0) {
        func_0BB028(56);
    } else {
        func_0BA9A8(56, 0);
    }
}
