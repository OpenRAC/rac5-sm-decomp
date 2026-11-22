/* LEVEL_04:0x0CCCD8 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_13F078(int a);
extern int func_13F110(void);
extern void func_13F1F0(void);
extern char *func_13E930(int id);
extern void func_141B48(void *o, int page);
extern void func_141B60(void *o, int page);
extern void func_141B90(void *o);
extern void func_0DC800(int a, int b, char *s, int c);
extern void func_0DC838(int a);
extern int func_0DC308(void);
extern int func_0DC318(void);
extern void func_0DC5E0(int a);
extern int D_0021A0E4;
extern int D_0021A0E8;

void func_0CCCD8(void *o)
{
    int sel;

    if (func_13F078(1)) {
        func_141B48(o, 0x1C);
        return;
    }
    if (func_13F110()) {
        func_13F1F0();
        func_141B60(o, 0x1D);
        return;
    }
    func_0DC800(1, D_0021A0E4, func_13E930(0x21A), 0);
    func_0DC838(10);
    sel = func_0DC308();
    if (func_0DC318() && sel == 1) {
        func_0DC5E0(0);
        if (D_0021A0E8 != 0x1D) {
            func_141B60(o, 0x1E);
        } else {
            func_141B90(o);
        }
    }
}
