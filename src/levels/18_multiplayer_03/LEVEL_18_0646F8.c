/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001A4F6C;
extern int D_001A4F70;
extern int D_001A4F74;
extern int D_001A4F78;
extern u32 D_0024E5E8;
extern u32 D_0024E670;

extern int func_0EB7A8(u32 mode);

void func_0646F8(void)
{
    if (D_001A4F6C == -1)
        D_001A4F6C = func_0EB7A8((D_0024E5E8 << 16) | 0x98003045u);
    if (D_001A4F70 == -1)
        D_001A4F70 = func_0EB7A8((D_0024E5E8 << 16) | 0x90003045u);
    if (D_001A4F74 == -1)
        D_001A4F74 = func_0EB7A8((D_0024E670 << 16) | 0x98003045u);
    if (D_001A4F78 == -1)
        D_001A4F78 = func_0EB7A8((D_0024E670 << 16) | 0x90003045u);
}
