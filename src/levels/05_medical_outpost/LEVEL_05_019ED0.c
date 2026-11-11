/* LEVEL_05:0x019ED0 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_0021B8E8;
extern void func_01A0D0(void);
extern int func_019E00(int a);
extern int func_019E18(int a);
extern void *func_019D98(int *p);
extern int func_0B9E78(void);
extern int func_0B9B60(void);
extern void func_0B9B70(int a);
extern void func_019FB8(void);

void func_019ED0(void)
{
    int t;

    if (D_0021B8E8.pending == 0)
        return;
    if (D_0021B8E8.pending == D_0021B8E8.cur) {
        D_0021B8E8.pending = 0;
        return;
    }
    func_01A0D0();
    while (func_019E00(6) && func_0B9E78() == 0)
        ;
    if (func_019E00(6) && func_019E18(4)) {
        D_0021B8E8.pending = func_0B9B60();
        func_0B9B70(0);
    } else if (func_019E18(6)) {
        func_019D98(&t);
        func_0B9B70(t);
    }
    D_0021B8E8.cur = D_0021B8E8.pending;
    D_0021B8E8.pending = 0;
    func_019FB8();
}
