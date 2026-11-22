/* LEVEL_01:0x0C74C0 -- menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_132BF8(int a);
extern int func_132C90(void);
extern void func_132D70(void);
extern char *func_1324B0(int id);
extern void func_1356C8(void *o, int page);
extern void func_1356E0(void *o, int page);
extern void func_135710(void *o);
extern void func_0D6F50(int a, int b, char *s, int c);
extern void func_0D6F88(int a);
extern int func_0D6A58(void);
extern int func_0D6A68(void);
extern void func_0D6D30(int a);
extern int D_00200C24;
extern int D_00200C28;

void func_0C74C0(void *o)
{
    int sel;

    if (func_132BF8(1)) {
        func_1356C8(o, 0x1C);
        return;
    }
    if (func_132C90()) {
        func_132D70();
        func_1356E0(o, 0x1D);
        return;
    }
    func_0D6F50(1, D_00200C24, func_1324B0(0x21A), 0);
    func_0D6F88(10);
    sel = func_0D6A58();
    if (func_0D6A68() && sel == 1) {
        func_0D6D30(0);
        if (D_00200C28 != 0x1D) {
            func_1356E0(o, 0x1E);
        } else {
            func_135710(o);
        }
    }
}
