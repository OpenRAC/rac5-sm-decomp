/* LEVEL_07:0x01AFF8 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_002454E8;
extern void func_01B1F8(void);
extern int func_01AF28(int a);
extern int func_01AF40(int a);
extern void func_01AEC0(int *p);
extern int func_0BD930(void);
extern int func_0BD618(void);
extern void func_0BD628(int a);
extern void func_01B0E0(void);

void func_01AFF8(void)
{
    int t;

    if (D_002454E8.pending == 0)
        return;
    if (D_002454E8.pending == D_002454E8.cur) {
        D_002454E8.pending = 0;
        return;
    }
    func_01B1F8();
    while (func_01AF28(6) && func_0BD930() == 0)
        ;
    if (func_01AF28(6) && func_01AF40(4)) {
        D_002454E8.pending = func_0BD618();
        func_0BD628(0);
    } else if (func_01AF40(6)) {
        func_01AEC0(&t);
        func_0BD628(t);
    }
    D_002454E8.cur = D_002454E8.pending;
    D_002454E8.pending = 0;
    func_01B0E0();
}
