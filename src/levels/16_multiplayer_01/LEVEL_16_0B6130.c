/* LEVEL_16:0x0B6130 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_10FA78(int a);
extern int func_10FB10(void);
extern void func_10FBD8(void);
extern char *func_10F330(int id);
extern void func_111D98(void *o, int page);
extern void func_111DB0(void *o, int page);
extern void func_111DE0(void *o);
extern void func_0C6648(int a, int b, char *s, int c);
extern void func_0C6680(int a);
extern int func_0C6150(void);
extern int func_0C6160(void);
extern void func_0C6428(int a);
extern int D_001AEC9C;
extern int D_001AECA0;

void func_0B6130(void *o)
{
    int sel;

    if (func_10FA78(1)) {
        func_111D98(o, 0x1C);
        return;
    }
    if (func_10FB10()) {
        func_10FBD8();
        func_111DB0(o, 0x1D);
        return;
    }
    func_0C6648(1, D_001AEC9C, func_10F330(0x21A), 0);
    func_0C6680(10);
    sel = func_0C6150();
    if (func_0C6160() && sel == 1) {
        func_0C6428(0);
        if (D_001AECA0 != 0x1D) {
            func_111DB0(o, 0x1E);
        } else {
            func_111DE0(o);
        }
    }
}
