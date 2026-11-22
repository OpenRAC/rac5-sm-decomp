/* LEVEL_24:0x0C0D88 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_1286F8(int a);
extern int func_128790(void);
extern void func_128870(void);
extern char *func_127FB0(int id);
extern void func_12B1C8(void *o, int page);
extern void func_12B1E0(void *o, int page);
extern void func_12B210(void *o);
extern void func_0D08A8(int a, int b, char *s, int c);
extern void func_0D08E0(int a);
extern int func_0D03B0(void);
extern int func_0D03C0(void);
extern void func_0D0688(int a);
extern int D_001D18A4;
extern int D_001D18A8;

void func_0C0D88(void *o)
{
    int sel;

    if (func_1286F8(1)) {
        func_12B1C8(o, 0x1C);
        return;
    }
    if (func_128790()) {
        func_128870();
        func_12B1E0(o, 0x1D);
        return;
    }
    func_0D08A8(1, D_001D18A4, func_127FB0(0x21A), 0);
    func_0D08E0(10);
    sel = func_0D03B0();
    if (func_0D03C0() && sel == 1) {
        func_0D0688(0);
        if (D_001D18A8 != 0x1D) {
            func_12B1E0(o, 0x1E);
        } else {
            func_12B210(o);
        }
    }
}
