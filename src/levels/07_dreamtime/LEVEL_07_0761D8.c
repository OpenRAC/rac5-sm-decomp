/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020A39C;
extern int D_0020A3A0;
extern int D_0020A3A4;
extern int D_0020A3A8;
extern u32 D_002AD6E8;
extern u32 D_002AD770;

extern int func_10D2F0(u32 mode);

void func_0761D8(void)
{
    if (D_0020A39C == -1)
        D_0020A39C = func_10D2F0((D_002AD6E8 << 16) | 0x98003045u);
    if (D_0020A3A0 == -1)
        D_0020A3A0 = func_10D2F0((D_002AD6E8 << 16) | 0x90003045u);
    if (D_0020A3A4 == -1)
        D_0020A3A4 = func_10D2F0((D_002AD770 << 16) | 0x98003045u);
    if (D_0020A3A8 == -1)
        D_0020A3A8 = func_10D2F0((D_002AD770 << 16) | 0x90003045u);
}
