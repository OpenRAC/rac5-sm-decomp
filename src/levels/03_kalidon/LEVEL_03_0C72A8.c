/* LEVEL_03:0x0C72A8 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_130FC0(int a);
extern int func_131058(void);
extern void func_131138(void);
extern char *func_130878(int id);
extern void func_133A90(void *o, int page);
extern void func_133AA8(void *o, int page);
extern void func_133AD8(void *o);
extern void func_0D6D38(int a, int b, char *s, int c);
extern void func_0D6D70(int a);
extern int func_0D6840(void);
extern int func_0D6850(void);
extern void func_0D6B18(int a);
extern int D_002192A4;
extern int D_002192A8;

void func_0C72A8(void *o)
{
    int sel;

    if (func_130FC0(1)) {
        func_133A90(o, 0x1C);
        return;
    }
    if (func_131058()) {
        func_131138();
        func_133AA8(o, 0x1D);
        return;
    }
    func_0D6D38(1, D_002192A4, func_130878(0x21A), 0);
    func_0D6D70(10);
    sel = func_0D6840();
    if (func_0D6850() && sel == 1) {
        func_0D6B18(0);
        if (D_002192A8 != 0x1D) {
            func_133AA8(o, 0x1E);
        } else {
            func_133AD8(o);
        }
    }
}
