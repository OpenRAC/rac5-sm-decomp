/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001DFE9C;
extern int D_001DFEA0;
extern int D_001DFEA4;
extern int D_001DFEA8;
extern u32 D_0027F568;
extern u32 D_0027F5F0;

extern int func_105C98(u32 mode);

void func_070AF0(void)
{
    if (D_001DFE9C == -1)
        D_001DFE9C = func_105C98((D_0027F568 << 16) | 0x98003045u);
    if (D_001DFEA0 == -1)
        D_001DFEA0 = func_105C98((D_0027F568 << 16) | 0x90003045u);
    if (D_001DFEA4 == -1)
        D_001DFEA4 = func_105C98((D_0027F5F0 << 16) | 0x98003045u);
    if (D_001DFEA8 == -1)
        D_001DFEA8 = func_105C98((D_0027F5F0 << 16) | 0x90003045u);
}
