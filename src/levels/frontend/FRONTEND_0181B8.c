/* FRONTEND:0x0181B8 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_021188 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_000304B2;
extern void (*D_0003044C)(void);
extern void func_022938(struct Obj *p);
extern void func_0209E0(int value);
extern void func_020988(void);
extern int func_021188(void);
extern int func_020C40(int step);

void func_0181B8(struct Obj *p)
{
    func_022938(p);
    D_000304B2 = 0;
    func_0209E0(0);
    func_020988();
    if (func_021188() != 0) {
        if (D_0003044C != 0)
            D_0003044C();
        func_020C40(10);
        D_000304B2 = 1;
    }
}
