/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001553FC;
extern int D_00155400;
extern int D_00155404;
extern int D_00155408;
extern u32 D_001ED9B8;
extern u32 D_001ED9AC;
extern u32 D_001ED9BC;

extern int func_0E8100(u32 mode);

void func_068DA0(void)
{
    if (D_001553FC == -1)
        D_001553FC = func_0E8100((D_001ED9B8 << 16) | 0xB8003045u);
    if (D_00155400 == -1)
        D_00155400 = func_0E8100((D_001ED9B8 << 16) | 0xB00030C5u);
    if (D_00155404 == -1)
        D_00155404 = func_0E8100((D_001ED9AC << 16) | 0xB00030C5u);
    if (D_00155408 == -1)
        D_00155408 = func_0E8100((D_001ED9BC << 16) | 0xB8003045u);
}
