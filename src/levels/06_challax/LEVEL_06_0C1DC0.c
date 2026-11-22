/* LEVEL_06:0x0C1DC0 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_1292C8(int a);
extern int func_129360(void);
extern void func_129440(void);
extern char *func_128B80(int id);
extern void func_12BD98(void *o, int page);
extern void func_12BDB0(void *o, int page);
extern void func_12BDE0(void *o);
extern void func_0D1850(int a, int b, char *s, int c);
extern void func_0D1888(int a);
extern int func_0D1358(void);
extern int func_0D1368(void);
extern void func_0D1630(int a);
extern int D_001EFB24;
extern int D_001EFB28;

void func_0C1DC0(void *o)
{
    int sel;

    if (func_1292C8(1)) {
        func_12BD98(o, 0x1C);
        return;
    }
    if (func_129360()) {
        func_129440();
        func_12BDB0(o, 0x1D);
        return;
    }
    func_0D1850(1, D_001EFB24, func_128B80(0x21A), 0);
    func_0D1888(10);
    sel = func_0D1358();
    if (func_0D1368() && sel == 1) {
        func_0D1630(0);
        if (D_001EFB28 != 0x1D) {
            func_12BDB0(o, 0x1E);
        } else {
            func_12BDE0(o);
        }
    }
}
