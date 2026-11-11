/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001F607C;
extern int D_001F6080;
extern int D_001F6084;
extern int D_001F6088;
extern u32 D_00297DF8;
extern u32 D_00297DEC;
extern u32 D_00297DFC;

extern int func_109DB8(u32 mode);

void func_072620(void)
{
    if (D_001F607C == -1)
        D_001F607C = func_109DB8((D_00297DF8 << 16) | 0xB8003045u);
    if (D_001F6080 == -1)
        D_001F6080 = func_109DB8((D_00297DF8 << 16) | 0xB00030C5u);
    if (D_001F6084 == -1)
        D_001F6084 = func_109DB8((D_00297DEC << 16) | 0xB00030C5u);
    if (D_001F6088 == -1)
        D_001F6088 = func_109DB8((D_00297DFC << 16) | 0xB8003045u);
}
