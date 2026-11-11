/* FRONTEND:0x001B40 -- resets a counter when requested, then runs the menu sequence. */
extern char D_00027E9C[];
extern int func_001FD0(void);
extern unsigned int func_001FE0(void);
extern void func_003338(int a0, unsigned int a1, unsigned int a2);
extern void func_001FF0(void);
extern void func_003550(int a0);
extern void func_001AE0(int a0, int a1);

int func_001B40(int a0, int a1)
{
    if (a1 != 0) {
        char *g = *(char **)D_00027E9C;
        *(int *)(g + 0x1C64) = 0;
    }
    if ((unsigned int)(a0 - 1) < 10) {
        if (func_001FD0() != 0) {
            unsigned int x = func_001FE0();
            func_003338(0x90, x & 0xFF, 0xFF);
            func_001FF0();
        }
    }
    func_003550(a0);
    func_001AE0(7, a0);
    return 1;
}
