/* LEVEL_17:0x0B5670 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_10EFF0(int a);
extern int func_10F088(void);
extern void func_10F150(void);
extern char *func_10E8A8(int id);
extern void func_111310(void *o, int page);
extern void func_111328(void *o, int page);
extern void func_111358(void *o);
extern void func_0C5B88(int a, int b, char *s, int c);
extern void func_0C5BC0(int a);
extern int func_0C5690(void);
extern int func_0C56A0(void);
extern void func_0C5968(int a);
extern int D_001A229C;
extern int D_001A22A0;

void func_0B5670(void *o)
{
    int sel;

    if (func_10EFF0(1)) {
        func_111310(o, 0x1C);
        return;
    }
    if (func_10F088()) {
        func_10F150();
        func_111328(o, 0x1D);
        return;
    }
    func_0C5B88(1, D_001A229C, func_10E8A8(0x21A), 0);
    func_0C5BC0(10);
    sel = func_0C5690();
    if (func_0C56A0() && sel == 1) {
        func_0C5968(0);
        if (D_001A22A0 != 0x1D) {
            func_111328(o, 0x1E);
        } else {
            func_111358(o);
        }
    }
}
