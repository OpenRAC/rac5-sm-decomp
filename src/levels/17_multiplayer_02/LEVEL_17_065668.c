/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001970EC;
extern int D_001970F0;
extern int D_001970F4;
extern int D_001970F8;
extern u32 D_0023F568;
extern u32 D_0023F5F0;

extern int func_0EC910(u32 mode);

void func_065668(void)
{
    if (D_001970EC == -1)
        D_001970EC = func_0EC910((D_0023F568 << 16) | 0x98003045u);
    if (D_001970F0 == -1)
        D_001970F0 = func_0EC910((D_0023F568 << 16) | 0x90003045u);
    if (D_001970F4 == -1)
        D_001970F4 = func_0EC910((D_0023F5F0 << 16) | 0x98003045u);
    if (D_001970F8 == -1)
        D_001970F8 = func_0EC910((D_0023F5F0 << 16) | 0x90003045u);
}
