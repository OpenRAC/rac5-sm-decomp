/* LEVEL_04:0x01A5B8 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_0024A3E8;
extern void func_01A7B8(void);
extern int func_01A4E8(int a);
extern int func_01A500(int a);
extern void *func_01A480(int *p);
extern int func_0C10E0(void);
extern int func_0C0D98(void);
extern void func_0C0DA8(int a);
extern void func_01A6A0(void);

void func_01A5B8(void)
{
    int t;

    if (D_0024A3E8.pending == 0)
        return;
    if (D_0024A3E8.pending == D_0024A3E8.cur) {
        D_0024A3E8.pending = 0;
        return;
    }
    func_01A7B8();
    while (func_01A4E8(6) && func_0C10E0() == 0)
        ;
    if (func_01A4E8(6) && func_01A500(4)) {
        D_0024A3E8.pending = func_0C0D98();
        func_0C0DA8(0);
    } else if (func_01A500(6)) {
        func_01A480(&t);
        func_0C0DA8(t);
    }
    D_0024A3E8.cur = D_0024A3E8.pending;
    D_0024A3E8.pending = 0;
    func_01A6A0();
}
