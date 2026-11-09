/* LEVEL_10:0x019FB8 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_00238FE8;
extern void func_01A1B8(void);
extern int func_019EE8(int a);
extern int func_019F00(int a);
extern void *func_019E80(int *p);
extern int func_0BCC18(void);
extern int func_0BC900(void);
extern void func_0BC910(int a);
extern void func_01A0A0(void);

void func_019FB8(void)
{
    int t;

    if (D_00238FE8.pending == 0)
        return;
    if (D_00238FE8.pending == D_00238FE8.cur) {
        D_00238FE8.pending = 0;
        return;
    }
    func_01A1B8();
    while (func_019EE8(6) && func_0BCC18() == 0)
        ;
    if (func_019EE8(6) && func_019F00(4)) {
        D_00238FE8.pending = func_0BC900();
        func_0BC910(0);
    } else if (func_019F00(6)) {
        func_019E80(&t);
        func_0BC910(t);
    }
    D_00238FE8.cur = D_00238FE8.pending;
    D_00238FE8.pending = 0;
    func_01A0A0();
}
