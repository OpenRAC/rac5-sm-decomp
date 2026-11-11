/* LEVEL_21:0x0BB4F8 -- placement copy of LEVEL_01_0DAEB8.c: one-time setup gated on two state queries, then sets a ready flag. */

extern int func_0214A0(int a, int b);
extern int func_0F1C78(int a);
extern int func_016A50(int a);
extern int func_09C378(void);
extern void func_0214C0(int a, int b, int c);
extern int func_0B7A80(int key, int state, int arg);
extern unsigned char D_0015B3C8[];

void func_0BB4F8(void)
{
    if (func_0214A0(0x91, 0) != 0) {
        return;
    }
    if (func_0F1C78(0) != 3) {
        return;
    }
    if (func_016A50(6) != 0) {
        if (func_09C378() == 0x38) {
            return;
        }
    }
    func_0214C0(0x91, 1, 0);
    func_0B7A80(3, 0xA1D, 0x21A);
    D_0015B3C8[0] = 1;
}
