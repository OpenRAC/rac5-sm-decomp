/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020F53C;
extern int D_0020F540;
extern int D_0020F544;
extern int D_0020F548;
extern u32 D_002B25F8;
extern u32 D_002B25EC;
extern u32 D_002B25FC;

extern int func_115EF0(u32 mode);

void func_075AD0(void)
{
    if (D_0020F53C == -1)
        D_0020F53C = func_115EF0((D_002B25F8 << 16) | 0xB8003045u);
    if (D_0020F540 == -1)
        D_0020F540 = func_115EF0((D_002B25F8 << 16) | 0xB00030C5u);
    if (D_0020F544 == -1)
        D_0020F544 = func_115EF0((D_002B25EC << 16) | 0xB00030C5u);
    if (D_0020F548 == -1)
        D_0020F548 = func_115EF0((D_002B25FC << 16) | 0xB8003045u);
}
