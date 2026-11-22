/* LEVEL_21:0x0A7B08 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_0F1AC0(int a);
extern int func_0F1B58(void);
extern void func_0F1C38(void);
extern char *func_0F1378(int id);
extern void func_0F4590(void *o, int page);
extern void func_0F45A8(void *o, int page);
extern void func_0F45D8(void *o);
extern void func_0B7590(int a, int b, char *s, int c);
extern void func_0B75C8(int a);
extern int func_0B7098(void);
extern int func_0B70A8(void);
extern void func_0B7370(int a);
extern int D_001558A4;
extern int D_001558A8;

void func_0A7B08(void *o)
{
    int sel;

    if (func_0F1AC0(1)) {
        func_0F4590(o, 0x1C);
        return;
    }
    if (func_0F1B58()) {
        func_0F1C38();
        func_0F45A8(o, 0x1D);
        return;
    }
    func_0B7590(1, D_001558A4, func_0F1378(0x21A), 0);
    func_0B75C8(10);
    sel = func_0B7098();
    if (func_0B70A8() && sel == 1) {
        func_0B7370(0);
        if (D_001558A8 != 0x1D) {
            func_0F45A8(o, 0x1E);
        } else {
            func_0F45D8(o);
        }
    }
}
