/* LEVEL_04:0x0CDA08 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_0021A0F2;
extern unsigned char D_0021A090;
extern int func_13F078(int a);
extern int func_13E930(int id);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int a);
extern int func_13F128(void);
extern int func_13FC68(void);
extern int func_13F210(void);
extern int func_0DD320(void);
extern void func_13F438(void);
extern int func_13F198(void);
extern void func_13F490(int value);
extern void func_141B60(int *p, int a1);

void func_0CDA08(int *o)
{
    if (D_0021A0F2 == 0) {
        func_141B60(o, 0x1D);
        return;
    }
    if (func_13F078(1) != 0) {
        func_0DC800(0, func_13E930(0xA5D), 0, 0);
        func_0DC838(5);
        return;
    }
    if (func_13F128() == 0) {
        if (func_13FC68() != 0) {
            D_0021A090 = 0;
            func_13F210();
            func_0DD320();
        }
        func_141B60(o, 0x1F);
    } else {
        func_13F438();
        func_13F198();
        func_141B60(o, 0x11);
        return;
    }
    func_13F490(1);
}
