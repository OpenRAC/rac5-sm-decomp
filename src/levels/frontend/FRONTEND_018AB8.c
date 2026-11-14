/* FRONTEND:0x018AB8 -- front-end screen enter: runs the reset helpers, applies the saved mode, calls the registered hook when the option byte is set, flags the active record and hands its two fields to the setup helper. */
extern char *D_00027E9C;
extern int D_00030424;
extern unsigned char D_00030438;
extern void (*D_0003044C)(void);
struct Obj;
extern void func_022938(struct Obj *p);
extern void func_0209E0(int value);
extern void func_020988(void);
extern int func_0211B0(int v);
extern int func_020D88(void *a0, void *a1);

void func_018AB8(void)
{
    ((void (*)(void))func_022938)();
    func_0209E0(0);
    func_020988();
    func_0211B0(D_00030424);
    if (D_00030438 != 0 && D_0003044C != 0) {
        D_0003044C();
    }
    *(int *)(D_00027E9C + 0x1C70) = 1;
    func_020D88(*(void **)(D_00027E9C + 0x1C6C), *(void **)(D_00027E9C + 0x3C));
}
