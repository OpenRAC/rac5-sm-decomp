/* LEVEL_03:0x01A6A0 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_0024AA68;
extern void func_01A8A0(void);
extern int func_01A5D0(int a);
extern int func_01A5E8(int a);
extern void *func_01A568(int *p);
extern int func_0BB6B8(void);
extern int func_0BB3A0(void);
extern void func_0BB3B0(int a);
extern void func_01A788(void);

void func_01A6A0(void)
{
    int t;

    if (D_0024AA68.pending == 0)
        return;
    if (D_0024AA68.pending == D_0024AA68.cur) {
        D_0024AA68.pending = 0;
        return;
    }
    func_01A8A0();
    while (func_01A5D0(6) && func_0BB6B8() == 0)
        ;
    if (func_01A5D0(6) && func_01A5E8(4)) {
        D_0024AA68.pending = func_0BB3A0();
        func_0BB3B0(0);
    } else if (func_01A5E8(6)) {
        func_01A568(&t);
        func_0BB3B0(t);
    }
    D_0024AA68.cur = D_0024AA68.pending;
    D_0024AA68.pending = 0;
    func_01A788();
}
