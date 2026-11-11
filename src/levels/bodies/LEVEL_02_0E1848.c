/* LEVEL_02:0x0E1848 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_027C98(int a, int b);
extern int func_139160(int a);
extern int func_01B1C8(int a);
extern int func_0C2640(void);
extern void func_027CB8(int a, int b, int c);
extern void func_0DDDD0(int a, int b, int c);
extern unsigned char D_0021B708[];

void func_0E1848(void)
{
    if (func_027C98(0x91, 0) != 0) {
        return;
    }
    if (func_139160(0) != 3) {
        return;
    }
    if (func_01B1C8(6) != 0) {
        if (func_0C2640() == 0x38) {
            return;
        }
    }
    func_027CB8(0x91, 1, 0);
    func_0DDDD0(3, 0xA1D, 0x21A);
    D_0021B708[0] = 1;
}
