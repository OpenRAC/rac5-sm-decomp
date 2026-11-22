/* LEVEL_23:0x0BE260 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_124370(int a);
extern int func_124408(void);
extern void func_1244E8(void);
extern char *func_123C28(int id);
extern void func_126E40(void *o, int page);
extern void func_126E58(void *o, int page);
extern void func_126E88(void *o);
extern void func_0CDD80(int a, int b, char *s, int c);
extern void func_0CDDB8(int a);
extern int func_0CD888(void);
extern int func_0CD898(void);
extern void func_0CDB60(int a);
extern int D_001D4024;
extern int D_001D4028;

void func_0BE260(void *o)
{
    int sel;

    if (func_124370(1)) {
        func_126E40(o, 0x1C);
        return;
    }
    if (func_124408()) {
        func_1244E8();
        func_126E58(o, 0x1D);
        return;
    }
    func_0CDD80(1, D_001D4024, func_123C28(0x21A), 0);
    func_0CDDB8(10);
    sel = func_0CD888();
    if (func_0CD898() && sel == 1) {
        func_0CDB60(0);
        if (D_001D4028 != 0x1D) {
            func_126E58(o, 0x1E);
        } else {
            func_126E88(o);
        }
    }
}
