/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001E53FC;
extern int D_001E5400;
extern int D_001E5404;
extern int D_001E5408;
extern u32 D_00283CB8;
extern u32 D_00283CAC;
extern u32 D_00283CBC;

extern int func_107F80(u32 mode);

void func_0716F0(void)
{
    if (D_001E53FC == -1)
        D_001E53FC = func_107F80((D_00283CB8 << 16) | 0xB8003045u);
    if (D_001E5400 == -1)
        D_001E5400 = func_107F80((D_00283CB8 << 16) | 0xB00030C5u);
    if (D_001E5404 == -1)
        D_001E5404 = func_107F80((D_00283CAC << 16) | 0xB00030C5u);
    if (D_001E5408 == -1)
        D_001E5408 = func_107F80((D_00283CBC << 16) | 0xB8003045u);
}
