/* LEVEL_22:0x0C93F8 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_021E40(int a, int b);
extern int func_10A280(int a);
extern int func_016E80(int a);
extern int func_0AA1D8(void);
extern void func_021E60(int a, int b, int c);
extern void func_0C5980(int a, int b, int c);
extern unsigned char D_00165AC8[];

void func_0C93F8(void)
{
    if (func_021E40(0x91, 0) != 0) {
        return;
    }
    if (func_10A280(0) != 3) {
        return;
    }
    if (func_016E80(6) != 0) {
        if (func_0AA1D8() == 0x38) {
            return;
        }
    }
    func_021E60(0x91, 1, 0);
    func_0C5980(3, 0xA1D, 0x21A);
    D_00165AC8[0] = 1;
}
