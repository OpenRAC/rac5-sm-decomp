/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_0020E71C;
extern int D_0020E720;
extern int D_0020E724;
extern int D_0020E728;
extern u32 D_002B2C68;
extern u32 D_002B2CF0;

extern int func_108650(u32 mode);

void func_073DB0(void)
{
    if (D_0020E71C == -1)
        D_0020E71C = func_108650((D_002B2C68 << 16) | 0x98003045u);
    if (D_0020E720 == -1)
        D_0020E720 = func_108650((D_002B2C68 << 16) | 0x90003045u);
    if (D_0020E724 == -1)
        D_0020E724 = func_108650((D_002B2CF0 << 16) | 0x98003045u);
    if (D_0020E728 == -1)
        D_0020E728 = func_108650((D_002B2CF0 << 16) | 0x90003045u);
}
