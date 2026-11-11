/* LEVEL_23:0x0AFED8 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001CFDD8[];
extern unsigned char D_001CFBB0[];
extern unsigned char D_001CFDE0[];
extern int D_001CFC28[];
extern int D_001CFBA8[];
extern unsigned char D_002F9B88[];
extern int D_001CFBB8[];
extern void func_0AFEB8(void *value);

void func_0AFED8(int i)
{
    func_0AFEB8((void *)3);
    D_001CFBB0[i] = 0;
    D_001CFDD8[i] = 1;
    D_001CFDE0[i] = 0;
    D_001CFC28[i] = 0;
    D_001CFBA8[i] = 0;
    D_002F9B88[i * 0x100] = 0;
    D_001CFBB8[i] = 0;
}
