/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020B03C;
extern int D_0020B040;
extern int D_0020B044;
extern int D_0020B048;
extern u32 D_002AF2F8;
extern u32 D_002AF2EC;
extern u32 D_002AF2FC;

extern int func_10FF68(u32 mode);

void func_078F08(void)
{
    if (D_0020B03C == -1)
        D_0020B03C = func_10FF68((D_002AF2F8 << 16) | 0xB8003045u);
    if (D_0020B040 == -1)
        D_0020B040 = func_10FF68((D_002AF2F8 << 16) | 0xB00030C5u);
    if (D_0020B044 == -1)
        D_0020B044 = func_10FF68((D_002AF2EC << 16) | 0xB00030C5u);
    if (D_0020B048 == -1)
        D_0020B048 = func_10FF68((D_002AF2FC << 16) | 0xB8003045u);
}
