/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001061CC;
extern int D_001061D0;
extern int D_001061D4;
extern int D_001061D8;
extern u32 D_00171AA8;
extern u32 D_00171B30;

extern int func_0C87D8(u32 mode);

void func_0579E8(void)
{
    if (D_001061CC == -1)
        D_001061CC = func_0C87D8((D_00171AA8 << 16) | 0x98003045u);
    if (D_001061D0 == -1)
        D_001061D0 = func_0C87D8((D_00171AA8 << 16) | 0x90003045u);
    if (D_001061D4 == -1)
        D_001061D4 = func_0C87D8((D_00171B30 << 16) | 0x98003045u);
    if (D_001061D8 == -1)
        D_001061D8 = func_0C87D8((D_00171B30 << 16) | 0x90003045u);
}
