/* LEVEL_08:0x0D23E8 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_144130(int a);
extern int func_1441C8(void);
extern void func_1442A8(void);
extern char *func_1439E8(int id);
extern void func_146C00(void *o, int page);
extern void func_146C18(void *o, int page);
extern void func_146C48(void *o);
extern void func_0E1F10(int a, int b, char *s, int c);
extern void func_0E1F48(int a);
extern int func_0E1A18(void);
extern int func_0E1A28(void);
extern void func_0E1CF0(int a);
extern int D_00249AE4;
extern int D_00249AE8;

void func_0D23E8(void *o)
{
    int sel;

    if (func_144130(1)) {
        func_146C00(o, 0x1C);
        return;
    }
    if (func_1441C8()) {
        func_1442A8();
        func_146C18(o, 0x1D);
        return;
    }
    func_0E1F10(1, D_00249AE4, func_1439E8(0x21A), 0);
    func_0E1F48(10);
    sel = func_0E1A18();
    if (func_0E1A28() && sel == 1) {
        func_0E1CF0(0);
        if (D_00249AE8 != 0x1D) {
            func_146C18(o, 0x1E);
        } else {
            func_146C48(o);
        }
    }
}
