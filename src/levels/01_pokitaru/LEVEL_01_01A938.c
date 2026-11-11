/* LEVEL_01:0x01A938 -- applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_0022FBE8;
extern void func_01AB38(void);
extern int func_01A868(int a);
extern int func_01A880(int a);
extern void *func_01A800(int *p);
extern int func_0BB8D0(void);
extern int func_0BB5B8(void);
extern void func_0BB5C8(int a);
extern void func_01AA20(void);

void func_01A938(void)
{
    int t;

    if (D_0022FBE8.pending == 0)
        return;
    if (D_0022FBE8.pending == D_0022FBE8.cur) {
        D_0022FBE8.pending = 0;
        return;
    }
    func_01AB38();
    while (func_01A868(6) && func_0BB8D0() == 0)
        ;
    if (func_01A868(6) && func_01A880(4)) {
        D_0022FBE8.pending = func_0BB5B8();
        func_0BB5C8(0);
    } else if (func_01A880(6)) {
        func_01A800(&t);
        func_0BB5C8(t);
    }
    D_0022FBE8.cur = D_0022FBE8.pending;
    D_0022FBE8.pending = 0;
    func_01AA20();
}
