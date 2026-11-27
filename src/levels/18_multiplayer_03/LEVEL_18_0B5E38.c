/* LEVEL_18:0x0B5E38 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001B012A;
extern unsigned char D_001B00C8;
extern int func_10E728(int a);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int a);
extern int func_10E7D8(void);
extern int func_10F208(void);
extern int func_10E8A8(void);
extern int func_0C6130(void);
extern void func_10EA20(void);
extern int func_10E848(void);
extern void func_10EA48(int value);
extern void func_110A60(int *p, int a1);

void func_0B5E38(int *o)
{
    if (D_001B012A == 0) {
        func_110A60(o, 0x1D);
        return;
    }
    if (func_10E728(1) != 0) {
        func_0C5620(0, func_10DFE0(0xA5D), 0, 0);
        func_0C5658(5);
        return;
    }
    if (func_10E7D8() == 0) {
        if (func_10F208() != 0) {
            D_001B00C8 = 0;
            func_10E8A8();
            func_0C6130();
        }
        func_110A60(o, 0x1F);
    } else {
        func_10EA20();
        func_10E848();
        func_110A60(o, 0x11);
        return;
    }
    func_10EA48(1);
}
