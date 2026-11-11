/* LEVEL_18:0x0B4878 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_001B01B8;
extern int D_001B0098;

int func_018220(int a);
int func_0A9DF8(void);
extern int func_0AAEE0(int a0);
extern int func_0AA7E0(int a, int b);

void func_0B4878(void)
{
    if (D_001B01B8 != 0) {
        if (func_018220(6) != 0) {
            if (func_0A9DF8() == 56) {
                return;
            }
        }
    }
    D_001B0098 = 1;
    if (func_018220(6) != 0) {
        func_0AAEE0(56);
    } else {
        func_0AA7E0(56, 0);
    }
}
