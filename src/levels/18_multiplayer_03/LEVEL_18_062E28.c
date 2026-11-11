/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001A4F4C;
extern int D_001A4F50;
extern int D_001A4F54;
extern int D_001A4F58;
extern u32 D_0024E5F8;
extern u32 D_0024E5EC;
extern u32 D_0024E5FC;

extern int func_0EB7A8(u32 mode);

void func_062E28(void)
{
    if (D_001A4F4C == -1)
        D_001A4F4C = func_0EB7A8((D_0024E5F8 << 16) | 0xB8003045u);
    if (D_001A4F50 == -1)
        D_001A4F50 = func_0EB7A8((D_0024E5F8 << 16) | 0xB00030C5u);
    if (D_001A4F54 == -1)
        D_001A4F54 = func_0EB7A8((D_0024E5EC << 16) | 0xB00030C5u);
    if (D_001A4F58 == -1)
        D_001A4F58 = func_0EB7A8((D_0024E5FC << 16) | 0xB8003045u);
}
