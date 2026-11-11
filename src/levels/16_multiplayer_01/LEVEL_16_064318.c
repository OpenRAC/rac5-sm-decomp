/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001A3ACC;
extern int D_001A3AD0;
extern int D_001A3AD4;
extern int D_001A3AD8;
extern u32 D_0024E278;
extern u32 D_0024E26C;
extern u32 D_0024E27C;

extern int func_0ED9E8(u32 mode);

void func_064318(void)
{
    if (D_001A3ACC == -1)
        D_001A3ACC = func_0ED9E8((D_0024E278 << 16) | 0xB8003045u);
    if (D_001A3AD0 == -1)
        D_001A3AD0 = func_0ED9E8((D_0024E278 << 16) | 0xB00030C5u);
    if (D_001A3AD4 == -1)
        D_001A3AD4 = func_0ED9E8((D_0024E26C << 16) | 0xB00030C5u);
    if (D_001A3AD8 == -1)
        D_001A3AD8 = func_0ED9E8((D_0024E27C << 16) | 0xB8003045u);
}
