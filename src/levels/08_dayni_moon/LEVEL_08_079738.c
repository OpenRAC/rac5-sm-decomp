/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0023EF3C;
extern int D_0023EF40;
extern int D_0023EF44;
extern int D_0023EF48;
extern u32 D_002E7078;
extern u32 D_002E706C;
extern u32 D_002E707C;

extern int func_11AA40(u32 mode);

void func_079738(void)
{
    if (D_0023EF3C == -1)
        D_0023EF3C = func_11AA40((D_002E7078 << 16) | 0xB8003045u);
    if (D_0023EF40 == -1)
        D_0023EF40 = func_11AA40((D_002E7078 << 16) | 0xB00030C5u);
    if (D_0023EF44 == -1)
        D_0023EF44 = func_11AA40((D_002E706C << 16) | 0xB00030C5u);
    if (D_0023EF48 == -1)
        D_0023EF48 = func_11AA40((D_002E707C << 16) | 0xB8003045u);
}
