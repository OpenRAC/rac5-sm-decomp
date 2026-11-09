/* LEVEL_19:0x0189A0 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001DEA68;
extern void func_018BB0(void);
extern int func_0188D8(int a);
extern int func_0188F0(int a);
extern void *func_018870(int *p);
extern int func_0AA1F8(void);
extern int func_0A9EE0(void);
extern void func_0A9EF0(int a);
extern void func_018A88(void);

void func_0189A0(void)
{
    int t;

    if (D_001DEA68.pending == 0)
        return;
    if (D_001DEA68.pending == D_001DEA68.cur) {
        D_001DEA68.pending = 0;
        return;
    }
    func_018BB0();
    while (func_0188D8(6) && func_0AA1F8() == 0)
        ;
    if (func_0188D8(6) && func_0188F0(4)) {
        D_001DEA68.pending = func_0A9EE0();
        func_0A9EF0(0);
    } else if (func_0188F0(6)) {
        func_018870(&t);
        func_0A9EF0(t);
    }
    D_001DEA68.cur = D_001DEA68.pending;
    D_001DEA68.pending = 0;
    func_018A88();
}
