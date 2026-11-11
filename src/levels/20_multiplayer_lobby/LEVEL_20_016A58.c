/* LEVEL_20:0x016A58 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_00136268;
extern void func_016C68(void);
extern int func_016990(int a);
extern int func_0169A8(int a);
extern void *func_016928(int *p);
extern int func_094E50(void);
extern int func_094B38(void);
extern void func_094B48(int a);
extern void func_016B40(void);

void func_016A58(void)
{
    int t;

    if (D_00136268.pending == 0)
        return;
    if (D_00136268.pending == D_00136268.cur) {
        D_00136268.pending = 0;
        return;
    }
    func_016C68();
    while (func_016990(6) && func_094E50() == 0)
        ;
    if (func_016990(6) && func_0169A8(4)) {
        D_00136268.pending = func_094B38();
        func_094B48(0);
    } else if (func_0169A8(6)) {
        func_016928(&t);
        func_094B48(t);
    }
    D_00136268.cur = D_00136268.pending;
    D_00136268.pending = 0;
    func_016B40();
}
