/* LEVEL_10:0x0C7FA8 -- a two-stage check on a flag byte, a status word and two helper results, ending with one of two helper calls. */

extern unsigned char D_00209CC0;
extern int D_00209BA0;

int func_019EE8(int a);
int func_0BD078(void);
extern int func_0BDDD0(int a0);
extern int func_0BD748(int a, int b);

void func_0C7FA8(void)
{
    if (D_00209CC0 != 0) {
        if (func_019EE8(6) != 0) {
            if (func_0BD078() == 56) {
                return;
            }
        }
    }
    D_00209BA0 = 1;
    if (func_019EE8(6) != 0) {
        func_0BDDD0(56);
    } else {
        func_0BD748(56, 0);
    }
}
