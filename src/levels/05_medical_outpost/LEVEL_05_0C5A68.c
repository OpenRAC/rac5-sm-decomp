/* LEVEL_05:0x0C5A68 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_12E570(int a);
extern int func_12E608(void);
extern void func_12E6E8(void);
extern char *func_12DE28(int id);
extern void func_131040(void *o, int page);
extern void func_131058(void *o, int page);
extern void func_131088(void *o);
extern void func_0D54F8(int a, int b, char *s, int c);
extern void func_0D5530(int a);
extern int func_0D5000(void);
extern int func_0D5010(void);
extern void func_0D52D8(int a);
extern int D_001EFFA4;
extern int D_001EFFA8;

void func_0C5A68(void *o)
{
    int sel;

    if (func_12E570(1)) {
        func_131040(o, 0x1C);
        return;
    }
    if (func_12E608()) {
        func_12E6E8();
        func_131058(o, 0x1D);
        return;
    }
    func_0D54F8(1, D_001EFFA4, func_12DE28(0x21A), 0);
    func_0D5530(10);
    sel = func_0D5000();
    if (func_0D5010() && sel == 1) {
        func_0D52D8(0);
        if (D_001EFFA8 != 0x1D) {
            func_131058(o, 0x1E);
        } else {
            func_131088(o);
        }
    }
}
