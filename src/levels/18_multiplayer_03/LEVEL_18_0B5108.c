/* LEVEL_18:0x0B5108 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_10E728(int a);
extern int func_10E7C0(void);
extern void func_10E888(void);
extern char *func_10DFE0(int id);
extern void func_110A48(void *o, int page);
extern void func_110A60(void *o, int page);
extern void func_110A90(void *o);
extern void func_0C5620(int a, int b, char *s, int c);
extern void func_0C5658(int a);
extern int func_0C5128(void);
extern int func_0C5138(void);
extern void func_0C5400(int a);
extern int D_001B011C;
extern int D_001B0120;

void func_0B5108(void *o)
{
    int sel;

    if (func_10E728(1)) {
        func_110A48(o, 0x1C);
        return;
    }
    if (func_10E7C0()) {
        func_10E888();
        func_110A60(o, 0x1D);
        return;
    }
    func_0C5620(1, D_001B011C, func_10DFE0(0x21A), 0);
    func_0C5658(10);
    sel = func_0C5128();
    if (func_0C5138() && sel == 1) {
        func_0C5400(0);
        if (D_001B0120 != 0x1D) {
            func_110A60(o, 0x1E);
        } else {
            func_110A90(o);
        }
    }
}
