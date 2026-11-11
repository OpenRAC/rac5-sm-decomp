/* LEVEL_10:0x19AD80 -- registers the 0x1C object with its two handlers, remembers the handle, then copies the 15-word default table. */
extern int D_002A11F0;
extern int D_002117EC;
extern int D_003A02C8[];
extern int D_0022DE68[];

extern void func_109060(void);
extern void func_108CA8(void);
extern int func_108CE0(int kind, int value, int a, int b, int c, int d, void (*handler)(void), void (*cleanup)(void));
extern void func_127E68(int *dst, int *src, int n);

void func_19AD80(void)
{
    int *slot = &D_002117EC;

    *slot = func_108CE0(0x1C, D_002A11F0, 0, 0, 0, 1, func_109060, func_108CA8);
    func_127E68(D_003A02C8, D_0022DE68, 0xF);
}
