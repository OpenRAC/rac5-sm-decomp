/* LEVEL_08:0x01B2B0 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_0027EE68;
extern void func_01B4B0(void);
extern int func_01B1E0(int a);
extern int func_01B1F8(int a);
extern void *func_01B178(int *p);
extern int func_0C67F0(void);
extern int func_0C64A8(void);
extern void func_0C64B8(int a);
extern void func_01B398(void);

void func_01B2B0(void)
{
    int t;

    if (D_0027EE68.pending == 0)
        return;
    if (D_0027EE68.pending == D_0027EE68.cur) {
        D_0027EE68.pending = 0;
        return;
    }
    func_01B4B0();
    while (func_01B1E0(6) && func_0C67F0() == 0)
        ;
    if (func_01B1E0(6) && func_01B1F8(4)) {
        D_0027EE68.pending = func_0C64A8();
        func_0C64B8(0);
    } else if (func_01B1F8(6)) {
        func_01B178(&t);
        func_0C64B8(t);
    }
    D_0027EE68.cur = D_0027EE68.pending;
    D_0027EE68.pending = 0;
    func_01B398();
}
