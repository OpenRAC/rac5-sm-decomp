/* LEVEL_08:0x0E5E88 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_027AD8(int a, int b);
extern int func_1442E8(int a);
extern int func_01B1E0(int a);
extern int func_0C6C50(void);
extern void func_027AF8(int a, int b, int c);
extern int func_0E2410(int key, int state, int arg);
extern unsigned char D_0024F608[];

void func_0E5E88(void)
{
    if (func_027AD8(0x91, 0) != 0) {
        return;
    }
    if (func_1442E8(0) != 3) {
        return;
    }
    if (func_01B1E0(6) != 0) {
        if (func_0C6C50() == 0x38) {
            return;
        }
    }
    func_027AF8(0x91, 1, 0);
    func_0E2410(3, 0xA1D, 0x21A);
    D_0024F608[0] = 1;
}
