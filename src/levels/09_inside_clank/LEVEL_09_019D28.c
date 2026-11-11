/* LEVEL_09:0x019D28 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_00217368;
extern void func_019F28(void);
extern int func_019C58(int a);
extern int func_019C70(int a);
extern void *func_019BF0(int *p);
extern int func_0B8B80(void);
extern int func_0B8868(void);
extern void func_0B8878(int a);
extern void func_019E10(void);

void func_019D28(void)
{
    int t;

    if (D_00217368.pending == 0)
        return;
    if (D_00217368.pending == D_00217368.cur) {
        D_00217368.pending = 0;
        return;
    }
    func_019F28();
    while (func_019C58(6) && func_0B8B80() == 0)
        ;
    if (func_019C58(6) && func_019C70(4)) {
        D_00217368.pending = func_0B8868();
        func_0B8878(0);
    } else if (func_019C70(6)) {
        func_019BF0(&t);
        func_0B8878(t);
    }
    D_00217368.cur = D_00217368.pending;
    D_00217368.pending = 0;
    func_019E10();
}
