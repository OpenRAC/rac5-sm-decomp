/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020A37C;
extern int D_0020A380;
extern int D_0020A384;
extern int D_0020A388;
extern u32 D_002AD6F8;
extern u32 D_002AD6EC;
extern u32 D_002AD6FC;

extern int func_10D2F0(u32 mode);

void func_074908(void)
{
    if (D_0020A37C == -1)
        D_0020A37C = func_10D2F0((D_002AD6F8 << 16) | 0xB8003045u);
    if (D_0020A380 == -1)
        D_0020A380 = func_10D2F0((D_002AD6F8 << 16) | 0xB00030C5u);
    if (D_0020A384 == -1)
        D_0020A384 = func_10D2F0((D_002AD6EC << 16) | 0xB00030C5u);
    if (D_0020A388 == -1)
        D_0020A388 = func_10D2F0((D_002AD6FC << 16) | 0xB8003045u);
}
