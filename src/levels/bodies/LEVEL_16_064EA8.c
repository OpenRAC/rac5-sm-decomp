/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001A3AEC;
extern int D_001A3AF0;
extern int D_001A3AF4;
extern int D_001A3AF8;
extern u32 D_0024E268;
extern u32 D_0024E2F0;

extern int func_0ED9E8(u32 mode);

void func_064EA8(void)
{
    if (D_001A3AEC == -1)
        D_001A3AEC = func_0ED9E8((D_0024E268 << 16) | 0x98003045u);
    if (D_001A3AF0 == -1)
        D_001A3AF0 = func_0ED9E8((D_0024E268 << 16) | 0x90003045u);
    if (D_001A3AF4 == -1)
        D_001A3AF4 = func_0ED9E8((D_0024E2F0 << 16) | 0x98003045u);
    if (D_001A3AF8 == -1)
        D_001A3AF8 = func_0ED9E8((D_0024E2F0 << 16) | 0x90003045u);
}
