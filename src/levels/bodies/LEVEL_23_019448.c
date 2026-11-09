/* LEVEL_23:0x019448 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001FD068;
extern void func_019648(void);
extern int func_019378(int a);
extern int func_019390(int a);
extern void *func_019310(int *p);
extern int func_0B2668(void);
extern int func_0B2350(void);
extern void func_0B2360(int a);
extern void func_019530(void);

void func_019448(void)
{
    int t;

    if (D_001FD068.pending == 0)
        return;
    if (D_001FD068.pending == D_001FD068.cur) {
        D_001FD068.pending = 0;
        return;
    }
    func_019648();
    while (func_019378(6) && func_0B2668() == 0)
        ;
    if (func_019378(6) && func_019390(4)) {
        D_001FD068.pending = func_0B2350();
        func_0B2360(0);
    } else if (func_019390(6)) {
        func_019310(&t);
        func_0B2360(t);
    }
    D_001FD068.cur = D_001FD068.pending;
    D_001FD068.pending = 0;
    func_019530();
}
