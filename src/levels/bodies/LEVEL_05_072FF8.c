/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001E541C;
extern int D_001E5420;
extern int D_001E5424;
extern int D_001E5428;
extern u32 D_00283CA8;
extern u32 D_00283D30;

extern int func_107F80(u32 mode);

void func_072FF8(void)
{
    if (D_001E541C == -1)
        D_001E541C = func_107F80((D_00283CA8 << 16) | 0x98003045u);
    if (D_001E5420 == -1)
        D_001E5420 = func_107F80((D_00283CA8 << 16) | 0x90003045u);
    if (D_001E5424 == -1)
        D_001E5424 = func_107F80((D_00283D30 << 16) | 0x98003045u);
    if (D_001E5428 == -1)
        D_001E5428 = func_107F80((D_00283D30 << 16) | 0x90003045u);
}
