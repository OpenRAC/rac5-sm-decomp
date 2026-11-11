/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001DFE7C;
extern int D_001DFE80;
extern int D_001DFE84;
extern int D_001DFE88;
extern u32 D_0027F578;
extern u32 D_0027F56C;
extern u32 D_0027F57C;

extern int func_105C98(u32 mode);

void func_06F220(void)
{
    if (D_001DFE7C == -1)
        D_001DFE7C = func_105C98((D_0027F578 << 16) | 0xB8003045u);
    if (D_001DFE80 == -1)
        D_001DFE80 = func_105C98((D_0027F578 << 16) | 0xB00030C5u);
    if (D_001DFE84 == -1)
        D_001DFE84 = func_105C98((D_0027F56C << 16) | 0xB00030C5u);
    if (D_001DFE88 == -1)
        D_001DFE88 = func_105C98((D_0027F57C << 16) | 0xB8003045u);
}
