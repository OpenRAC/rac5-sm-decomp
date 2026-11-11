/* LEVEL_16:0x018CA0 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001DE8E8;
extern void func_018EB0(void);
extern int func_018BD8(int a);
extern int func_018BF0(int a);
extern void *func_018B70(int *p);
extern int func_0AA920(void);
extern int func_0AA608(void);
extern void func_0AA618(int a);
extern void func_018D88(void);

void func_018CA0(void)
{
    int t;

    if (D_001DE8E8.pending == 0)
        return;
    if (D_001DE8E8.pending == D_001DE8E8.cur) {
        D_001DE8E8.pending = 0;
        return;
    }
    func_018EB0();
    while (func_018BD8(6) && func_0AA920() == 0)
        ;
    if (func_018BD8(6) && func_018BF0(4)) {
        D_001DE8E8.pending = func_0AA608();
        func_0AA618(0);
    } else if (func_018BF0(6)) {
        func_018B70(&t);
        func_0AA618(t);
    }
    D_001DE8E8.cur = D_001DE8E8.pending;
    D_001DE8E8.pending = 0;
    func_018D88();
}
