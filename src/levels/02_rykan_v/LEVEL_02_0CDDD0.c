/* LEVEL_02:0x0CDDD0 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_138FA8(int a);
extern int func_139040(void);
extern void func_139120(void);
extern char *func_138860(int id);
extern void func_13BA78(void *o, int page);
extern void func_13BA90(void *o, int page);
extern void func_13BAC0(void *o);
extern void func_0DD8E0(int a, int b, char *s, int c);
extern void func_0DD918(int a);
extern int func_0DD3E8(void);
extern int func_0DD3F8(void);
extern void func_0DD6C0(int a);
extern int D_00215BE4;
extern int D_00215BE8;

void func_0CDDD0(void *o)
{
    int sel;

    if (func_138FA8(1)) {
        func_13BA78(o, 0x1C);
        return;
    }
    if (func_139040()) {
        func_139120();
        func_13BA90(o, 0x1D);
        return;
    }
    func_0DD8E0(1, D_00215BE4, func_138860(0x21A), 0);
    func_0DD918(10);
    sel = func_0DD3E8();
    if (func_0DD3F8() && sel == 1) {
        func_0DD6C0(0);
        if (D_00215BE8 != 0x1D) {
            func_13BA90(o, 0x1E);
        } else {
            func_13BAC0(o);
        }
    }
}
