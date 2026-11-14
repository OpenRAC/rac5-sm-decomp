/* LEVEL_08:0x17D3C0 -- placement copy of LEVEL_04_172018.c: copies six words through the shared transform from one table to another. */
extern int D_003E5490[];
extern int D_0026B000[];
extern void func_13B540(int *dst, int *src, int n);

void func_17D3C0(void)
{
    func_13B540(D_003E5490, D_0026B000, 6);
}
