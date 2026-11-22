/* LEVEL_20:0x0A0660 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_0E2860(int a);
extern int func_0E28F8(void);
extern void func_0E29C0(void);
extern char *func_0E2118(int id);
extern void func_0E4B80(void *o, int page);
extern void func_0E4B98(void *o, int page);
extern void func_0E4BC8(void *o);
extern void func_0B0B78(int a, int b, char *s, int c);
extern void func_0B0BB0(int a);
extern int func_0B0680(void);
extern int func_0B0690(void);
extern void func_0B0958(int a);
extern int D_0011137C;
extern int D_00111380;

void func_0A0660(void *o)
{
    int sel;

    if (func_0E2860(1)) {
        func_0E4B80(o, 0x1C);
        return;
    }
    if (func_0E28F8()) {
        func_0E29C0();
        func_0E4B98(o, 0x1D);
        return;
    }
    func_0B0B78(1, D_0011137C, func_0E2118(0x21A), 0);
    func_0B0BB0(10);
    sel = func_0B0680();
    if (func_0B0690() && sel == 1) {
        func_0B0958(0);
        if (D_00111380 != 0x1D) {
            func_0E4B98(o, 0x1E);
        } else {
            func_0E4BC8(o);
        }
    }
}
