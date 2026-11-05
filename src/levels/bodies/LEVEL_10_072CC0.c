/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001FF07C;
extern int D_001FF080;
extern int D_001FF084;
extern int D_001FF088;
extern u32 D_002A11F8;
extern u32 D_002A11EC;
extern u32 D_002A11FC;

extern int func_10AAC0(u32 mode);

void func_072CC0(void)
{
    if (D_001FF07C == -1)
        D_001FF07C = func_10AAC0((D_002A11F8 << 16) | 0xB8003045u);
    if (D_001FF080 == -1)
        D_001FF080 = func_10AAC0((D_002A11F8 << 16) | 0xB00030C5u);
    if (D_001FF084 == -1)
        D_001FF084 = func_10AAC0((D_002A11EC << 16) | 0xB00030C5u);
    if (D_001FF088 == -1)
        D_001FF088 = func_10AAC0((D_002A11FC << 16) | 0xB8003045u);
}
