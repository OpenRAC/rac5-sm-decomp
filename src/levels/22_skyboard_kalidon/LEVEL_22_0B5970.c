/* LEVEL_22:0x0B5970 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_10A0C8(int a);
extern int func_10A160(void);
extern void func_10A240(void);
extern char *func_109980(int id);
extern void func_10CB98(void *o, int page);
extern void func_10CBB0(void *o, int page);
extern void func_10CBE0(void *o);
extern void func_0C5490(int a, int b, char *s, int c);
extern void func_0C54C8(int a);
extern int func_0C4F98(void);
extern int func_0C4FA8(void);
extern void func_0C5270(int a);
extern int D_0015FFA4;
extern int D_0015FFA8;

void func_0B5970(void *o)
{
    int sel;

    if (func_10A0C8(1)) {
        func_10CB98(o, 0x1C);
        return;
    }
    if (func_10A160()) {
        func_10A240();
        func_10CBB0(o, 0x1D);
        return;
    }
    func_0C5490(1, D_0015FFA4, func_109980(0x21A), 0);
    func_0C54C8(10);
    sel = func_0C4F98();
    if (func_0C4FA8() && sel == 1) {
        func_0C5270(0);
        if (D_0015FFA8 != 0x1D) {
            func_10CBB0(o, 0x1E);
        } else {
            func_10CBE0(o);
        }
    }
}
