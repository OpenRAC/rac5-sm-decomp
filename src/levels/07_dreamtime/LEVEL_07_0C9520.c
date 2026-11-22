/* LEVEL_07:0x0C9520 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_135BF8(int a);
extern int func_135C90(void);
extern void func_135D70(void);
extern char *func_1354B0(int id);
extern void func_1386C8(void *o, int page);
extern void func_1386E0(void *o, int page);
extern void func_138710(void *o);
extern void func_0D8FB0(int a, int b, char *s, int c);
extern void func_0D8FE8(int a);
extern int func_0D8AB8(void);
extern int func_0D8AC8(void);
extern void func_0D8D90(int a);
extern int D_00214F24;
extern int D_00214F28;

void func_0C9520(void *o)
{
    int sel;

    if (func_135BF8(1)) {
        func_1386C8(o, 0x1C);
        return;
    }
    if (func_135C90()) {
        func_135D70();
        func_1386E0(o, 0x1D);
        return;
    }
    func_0D8FB0(1, D_00214F24, func_1354B0(0x21A), 0);
    func_0D8FE8(10);
    sel = func_0D8AB8();
    if (func_0D8AC8() && sel == 1) {
        func_0D8D90(0);
        if (D_00214F28 != 0x1D) {
            func_1386E0(o, 0x1E);
        } else {
            func_138710(o);
        }
    }
}
