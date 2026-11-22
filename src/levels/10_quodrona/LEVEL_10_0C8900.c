/* LEVEL_10:0x0C8900 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_130A58(int a);
extern int func_130AF0(void);
extern void func_130BD0(void);
extern char *func_130310(int id);
extern void func_133548(void *o, int page);
extern void func_133560(void *o, int page);
extern void func_133590(void *o);
extern void func_0D8390(int a, int b, char *s, int c);
extern void func_0D83C8(int a);
extern int func_0D7E98(void);
extern int func_0D7EA8(void);
extern void func_0D8170(int a);
extern int D_00209C24;
extern int D_00209C28;

void func_0C8900(void *o)
{
    int sel;

    if (func_130A58(1)) {
        func_133548(o, 0x1C);
        return;
    }
    if (func_130AF0()) {
        func_130BD0();
        func_133560(o, 0x1D);
        return;
    }
    func_0D8390(1, D_00209C24, func_130310(0x21A), 0);
    func_0D83C8(10);
    sel = func_0D7E98();
    if (func_0D7EA8() && sel == 1) {
        func_0D8170(0);
        if (D_00209C28 != 0x1D) {
            func_133560(o, 0x1E);
        } else {
            func_133590(o);
        }
    }
}
