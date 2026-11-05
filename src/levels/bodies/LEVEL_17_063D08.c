/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001970CC;
extern int D_001970D0;
extern int D_001970D4;
extern int D_001970D8;
extern u32 D_0023F578;
extern u32 D_0023F56C;
extern u32 D_0023F57C;

extern int func_0EC910(u32 mode);

void func_063D08(void)
{
    if (D_001970CC == -1)
        D_001970CC = func_0EC910((D_0023F578 << 16) | 0xB8003045u);
    if (D_001970D0 == -1)
        D_001970D0 = func_0EC910((D_0023F578 << 16) | 0xB00030C5u);
    if (D_001970D4 == -1)
        D_001970D4 = func_0EC910((D_0023F56C << 16) | 0xB00030C5u);
    if (D_001970D8 == -1)
        D_001970D8 = func_0EC910((D_0023F57C << 16) | 0xB8003045u);
}
