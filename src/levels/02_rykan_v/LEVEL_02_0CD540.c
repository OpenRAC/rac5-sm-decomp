/* LEVEL_02:0x0CD540 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00215C80;
extern int D_00215B60;

int func_01B1C8(int a);
int func_0C2640(void);
extern int func_0C3390(int a0);
extern int func_0C2D10(int a, int b);

void func_0CD540(void)
{
    if (D_00215C80 != 0) {
        if (func_01B1C8(6) != 0) {
            if (func_0C2640() == 56) {
                return;
            }
        }
    }
    D_00215B60 = 1;
    if (func_01B1C8(6) != 0) {
        func_0C3390(56);
    } else {
        func_0C2D10(56, 0);
    }
}
