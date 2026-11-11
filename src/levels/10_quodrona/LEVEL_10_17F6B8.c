/* LEVEL_10:0x17F6B8 -- creates the object for kind 0x1C from the shared handle with its two callbacks and keeps it in a global. */
extern int D_00210A84;
extern int D_002A11F0;
extern void func_1085A8(void);
extern void func_108CA8(void);
extern int func_108CE0(int a0, int a1, int a2, int a3, int t0, int t1, void *t2, void *t3);

void func_17F6B8(void)
{
    int *p = &D_00210A84;

    *p = func_108CE0(0x1C, D_002A11F0, 0, 0, 0, 1, func_1085A8, func_108CA8);
}
