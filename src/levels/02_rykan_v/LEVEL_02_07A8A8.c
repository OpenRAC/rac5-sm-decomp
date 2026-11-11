/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020B05C;
extern int D_0020B060;
extern int D_0020B064;
extern int D_0020B068;
extern u32 D_002AF2E8;
extern u32 D_002AF370;

extern int func_10FF68(u32 mode);

void func_07A8A8(void)
{
    if (D_0020B05C == -1)
        D_0020B05C = func_10FF68((D_002AF2E8 << 16) | 0x98003045u);
    if (D_0020B060 == -1)
        D_0020B060 = func_10FF68((D_002AF2E8 << 16) | 0x90003045u);
    if (D_0020B064 == -1)
        D_0020B064 = func_10FF68((D_002AF370 << 16) | 0x98003045u);
    if (D_0020B068 == -1)
        D_0020B068 = func_10FF68((D_002AF370 << 16) | 0x90003045u);
}
