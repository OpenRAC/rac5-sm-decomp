/* LEVEL_19:0x0B5A08 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_110118(int a);
extern int func_1101B0(void);
extern void func_110278(void);
extern char *func_10F9D0(int id);
extern void func_112438(void *o, int page);
extern void func_112450(void *o, int page);
extern void func_112480(void *o);
extern void func_0C5F20(int a, int b, char *s, int c);
extern void func_0C5F58(int a);
extern int func_0C5A28(void);
extern int func_0C5A38(void);
extern void func_0C5D00(int a);
extern int D_001AFE1C;
extern int D_001AFE20;

void func_0B5A08(void *o)
{
    int sel;

    if (func_110118(1)) {
        func_112438(o, 0x1C);
        return;
    }
    if (func_1101B0()) {
        func_110278();
        func_112450(o, 0x1D);
        return;
    }
    func_0C5F20(1, D_001AFE1C, func_10F9D0(0x21A), 0);
    func_0C5F58(10);
    sel = func_0C5A28();
    if (func_0C5A38() && sel == 1) {
        func_0C5D00(0);
        if (D_001AFE20 != 0x1D) {
            func_112450(o, 0x1E);
        } else {
            func_112480(o);
        }
    }
}
