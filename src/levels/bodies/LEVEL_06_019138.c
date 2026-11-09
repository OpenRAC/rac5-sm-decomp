/* LEVEL_06:0x019138 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_0021C968;
extern void func_019338(void);
extern int func_019068(int a);
extern int func_019080(int a);
extern void func_019000(int *p);
extern int func_0B61D0(void);
extern int func_0B5EB8(void);
extern void func_0B5EC8(int a);
extern void func_019220(void);

void func_019138(void)
{
    int t;

    if (D_0021C968.pending == 0)
        return;
    if (D_0021C968.pending == D_0021C968.cur) {
        D_0021C968.pending = 0;
        return;
    }
    func_019338();
    while (func_019068(6) && func_0B61D0() == 0)
        ;
    if (func_019068(6) && func_019080(4)) {
        D_0021C968.pending = func_0B5EB8();
        func_0B5EC8(0);
    } else if (func_019080(6)) {
        func_019000(&t);
        func_0B5EC8(t);
    }
    D_0021C968.cur = D_0021C968.pending;
    D_0021C968.pending = 0;
    func_019220();
}
