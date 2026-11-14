/* LEVEL_10:0x1A5B38 -- creates the object for kind 0x1C from the shared handle with its two callbacks, keeps it in a global, then runs func_0EF088 for entry 5. */
extern int D_0021192C;
extern int D_002A11F4;
extern void func_109060(void);
extern void func_108CA8(void);
extern int func_108CE0(int a0, int a1, int a2, int a3, int t0, int t1, void *t2, void *t3);
extern void func_0EF088(int index);

void func_1A5B38(void)
{
    int *p = &D_0021192C;

    *p = func_108CE0(0x1C, D_002A11F4, 0, 0, 0, 1, func_109060, func_108CA8);
    func_0EF088(5);
}
