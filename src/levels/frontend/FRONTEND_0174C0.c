/* FRONTEND:0x0174C0 -- placement copy of LEVEL_01_0C74C0.c: menu page handler: routes to the next page from the confirm / cancel inputs. */
extern int func_0205B8(int a);
extern int func_020650(void);
extern void func_020730(void);
extern char *func_01F778(int id);
extern void func_022988(void *o, int page);
extern void func_0229A0(void *o, int page);
extern void func_0229D0(void *o);
extern void func_0140E0(int a, int b, char *s, int c);
extern void func_014118(int a);
extern int func_013BF0(void);
extern int func_013C00(void);
extern void func_013EC0(int a);
extern int D_000304A4;
extern int D_000304A8;

void func_0174C0(void *o)
{
    int sel;

    if (func_0205B8(1)) {
        func_022988(o, 0x1C);
        return;
    }
    if (func_020650()) {
        func_020730();
        func_0229A0(o, 0x1D);
        return;
    }
    func_0140E0(1, D_000304A4, func_01F778(0x21A), 0);
    func_014118(10);
    sel = func_013BF0();
    if (func_013C00() && sel == 1) {
        func_013EC0(0);
        if (D_000304A8 != 0x1D) {
            func_0229A0(o, 0x1E);
        } else {
            func_0229D0(o);
        }
    }
}
