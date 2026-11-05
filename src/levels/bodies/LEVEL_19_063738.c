/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001A4C4C;
extern int D_001A4C50;
extern int D_001A4C54;
extern int D_001A4C58;
extern u32 D_0024E3F8;
extern u32 D_0024E3EC;
extern u32 D_0024E3FC;

extern int func_0ED5B8(u32 mode);

void func_063738(void)
{
    if (D_001A4C4C == -1)
        D_001A4C4C = func_0ED5B8((D_0024E3F8 << 16) | 0xB8003045u);
    if (D_001A4C50 == -1)
        D_001A4C50 = func_0ED5B8((D_0024E3F8 << 16) | 0xB00030C5u);
    if (D_001A4C54 == -1)
        D_001A4C54 = func_0ED5B8((D_0024E3EC << 16) | 0xB00030C5u);
    if (D_001A4C58 == -1)
        D_001A4C58 = func_0ED5B8((D_0024E3FC << 16) | 0xB8003045u);
}
