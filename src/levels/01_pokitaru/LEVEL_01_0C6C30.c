/* LEVEL_01:0x0C6C30 -- placement copy of LEVEL_10_0C7FA8.c: a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00200CC0;
extern int D_00200BA0;

int func_01A868(int a);
int func_0BBD30(void);
extern int func_0BCA80(int a0);
extern int func_0BC400(int a, int b);

void func_0C6C30(void)
{
    if (D_00200CC0 != 0) {
        if (func_01A868(6) != 0) {
            if (func_0BBD30() == 56) {
                return;
            }
        }
    }
    D_00200BA0 = 1;
    if (func_01A868(6) != 0) {
        func_0BCA80(56);
    } else {
        func_0BC400(56, 0);
    }
}
