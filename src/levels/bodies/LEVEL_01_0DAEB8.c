/* LEVEL_01:0x0DAEB8 -- one-time setup gated on two state queries, then sets a ready flag. */

extern int func_0274B0(int a, int b);
extern int func_132DB0(int a);
extern int func_01A868(int a);
extern int func_0BBD30(void);
extern void func_0274D0(int a, int b, int c);
extern void func_0D7440(int a, int b, int c);
extern unsigned char D_00206748[];

void func_0DAEB8(void)
{
    if (func_0274B0(0x91, 0) != 0) {
        return;
    }
    if (func_132DB0(0) != 3) {
        return;
    }
    if (func_01A868(6) != 0) {
        if (func_0BBD30() == 0x38) {
            return;
        }
    }
    func_0274D0(0x91, 1, 0);
    func_0D7440(3, 0xA1D, 0x21A);
    D_00206748[0] = 1;
}
