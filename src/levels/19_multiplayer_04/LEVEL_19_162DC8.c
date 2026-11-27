/* LEVEL_19:0x162DC8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0024E3C0[];
extern unsigned int D_001BF15C;
extern unsigned int D_001BF160;
extern int D_001BF164;
extern int D_001BF168;
extern int D_001BF16C;
extern char D_001BF1E0[];
extern char D_001BF788[];

extern void func_189508(long long, long long, long long, long long);
extern void func_193568(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0D9168(int index);

void func_162DC8(void)
{
    D_001BF15C = (D_001BF15C & 0xF800FFFFu) | ((unsigned int)D_0024E3C0[90] << 16);
    D_001BF160 = (D_001BF160 & 0xF800FFFFu) | ((unsigned int)D_0024E3C0[128] << 16);
    D_001BF16C = ((int (*)(unsigned int, char *, char *, void *))func_189508)(
        ((unsigned int)D_0024E3C0[127] << 16) | 0x800060D9u, D_001BF1E0, D_001BF788, 0);
    func_193568(&D_001BF164, D_001BF15C, &D_001BF168, D_001BF160, 0);
    func_0D9168(7);
}
