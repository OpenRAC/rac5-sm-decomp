/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001A4C6C;
extern int D_001A4C70;
extern int D_001A4C74;
extern int D_001A4C78;
extern u32 D_0024E3E8;
extern u32 D_0024E470;

extern int func_0ED5B8(u32 mode);

void func_065098(void)
{
    if (D_001A4C6C == -1)
        D_001A4C6C = func_0ED5B8((D_0024E3E8 << 16) | 0x98003045u);
    if (D_001A4C70 == -1)
        D_001A4C70 = func_0ED5B8((D_0024E3E8 << 16) | 0x90003045u);
    if (D_001A4C74 == -1)
        D_001A4C74 = func_0ED5B8((D_0024E470 << 16) | 0x98003045u);
    if (D_001A4C78 == -1)
        D_001A4C78 = func_0ED5B8((D_0024E470 << 16) | 0x90003045u);
}
