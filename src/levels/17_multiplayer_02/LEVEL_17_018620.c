/* LEVEL_17:0x018620 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001CFBE8;
extern void func_018830(void);
extern int func_018558(int a);
extern int func_018570(int a);
extern void *func_0184F0(int *p);
extern int func_0A9E60(void);
extern int func_0A9B48(void);
extern void func_0A9B58(int a);
extern void func_018708(void);

void func_018620(void)
{
    int t;

    if (D_001CFBE8.pending == 0)
        return;
    if (D_001CFBE8.pending == D_001CFBE8.cur) {
        D_001CFBE8.pending = 0;
        return;
    }
    func_018830();
    while (func_018558(6) && func_0A9E60() == 0)
        ;
    if (func_018558(6) && func_018570(4)) {
        D_001CFBE8.pending = func_0A9B48();
        func_0A9B58(0);
    } else if (func_018570(6)) {
        func_0184F0(&t);
        func_0A9B58(t);
    }
    D_001CFBE8.cur = D_001CFBE8.pending;
    D_001CFBE8.pending = 0;
    func_018708();
}
