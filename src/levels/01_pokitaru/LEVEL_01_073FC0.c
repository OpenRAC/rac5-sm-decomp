/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001F609C;
extern int D_001F60A0;
extern int D_001F60A4;
extern int D_001F60A8;
extern u32 D_00297DE8;
extern u32 D_00297E70;

extern int func_109DB8(u32 mode);

void func_073FC0(void)
{
    if (D_001F609C == -1)
        D_001F609C = func_109DB8((D_00297DE8 << 16) | 0x98003045u);
    if (D_001F60A0 == -1)
        D_001F60A0 = func_109DB8((D_00297DE8 << 16) | 0x90003045u);
    if (D_001F60A4 == -1)
        D_001F60A4 = func_109DB8((D_00297E70 << 16) | 0x98003045u);
    if (D_001F60A8 == -1)
        D_001F60A8 = func_109DB8((D_00297E70 << 16) | 0x90003045u);
}
