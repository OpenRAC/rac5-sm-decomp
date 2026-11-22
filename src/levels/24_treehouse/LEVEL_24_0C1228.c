/* LEVEL_24:0x0C1228 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001D1830;
extern int D_001D1894;

extern int func_1286F8(int a);
extern int func_1288E0(int a);
extern void func_12B1C8(void *o, int state);
extern void func_12B1E0(void *o, int state);
extern int func_127FB0(int id);
extern void func_0D08A8(int a, int b, int c, int d);
extern void func_0D08E0(int a);
extern int func_0D03B0(void);
extern int func_0D03C0(void);
extern void func_0D0688(int a);

void func_0C1228(void *o)
{
    int a;
    int b;

    if (func_1286F8(1)) {
        func_12B1C8(o, 0x1C);
        return;
    }
    if (func_1288E0(0)) {
        func_12B1E0(o, 0x1D);
        return;
    }
    a = func_127FB0(0xA5C);
    b = func_127FB0(0x21A);
    func_0D08A8(1, a, b, 0);
    func_0D08E0(0xA);
    a = func_0D03B0();
    if (func_0D03C0() != 0) {
        switch (a) {
        case 1:
            func_0D0688(0);
            if (D_001D1830 != 0) {
                D_001D1894 = 0x1A;
                func_12B1E0(o, 0x13);
            } else {
                func_12B1E0(o, 0x1E);
            }
            break;
        case 2:
            func_0D0688(0);
            func_12B1E0(o, 0x1E);
            break;
        }
    }
}
