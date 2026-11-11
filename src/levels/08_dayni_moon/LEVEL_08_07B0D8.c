/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0023EF5C;
extern int D_0023EF60;
extern int D_0023EF64;
extern int D_0023EF68;
extern u32 D_002E7068;
extern u32 D_002E70F0;

extern int func_11AA40(u32 mode);

void func_07B0D8(void)
{
    if (D_0023EF5C == -1)
        D_0023EF5C = func_11AA40((D_002E7068 << 16) | 0x98003045u);
    if (D_0023EF60 == -1)
        D_0023EF60 = func_11AA40((D_002E7068 << 16) | 0x90003045u);
    if (D_0023EF64 == -1)
        D_0023EF64 = func_11AA40((D_002E70F0 << 16) | 0x98003045u);
    if (D_0023EF68 == -1)
        D_0023EF68 = func_11AA40((D_002E70F0 << 16) | 0x90003045u);
}
