/* LEVEL_18:0x0182E8 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001DEC68;
extern void func_0184F8(void);
extern int func_018220(int a);
extern int func_018238(int a);
extern void *func_0181B8(int *p);
extern int func_0A98F8(void);
extern int func_0A95E0(void);
extern void func_0A95F0(int a);
extern void func_0183D0(void);

void func_0182E8(void)
{
    int t;

    if (D_001DEC68.pending == 0)
        return;
    if (D_001DEC68.pending == D_001DEC68.cur) {
        D_001DEC68.pending = 0;
        return;
    }
    func_0184F8();
    while (func_018220(6) && func_0A98F8() == 0)
        ;
    if (func_018220(6) && func_018238(4)) {
        D_001DEC68.pending = func_0A95E0();
        func_0A95F0(0);
    } else if (func_018238(6)) {
        func_0181B8(&t);
        func_0A95F0(t);
    }
    D_001DEC68.cur = D_001DEC68.pending;
    D_001DEC68.pending = 0;
    func_0183D0();
}
