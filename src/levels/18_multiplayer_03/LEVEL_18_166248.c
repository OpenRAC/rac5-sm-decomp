/* LEVEL_18:0x166248 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0024E5C0[];
extern unsigned int D_001BF414;
extern unsigned int D_001BF418;
extern int D_001BF41C;
extern int D_001BF420;
extern int D_001BF424;
extern char D_001BF498[];
extern char D_001BFB40[];

extern void func_18DC10(long long, long long, long long, long long);
extern void func_1946F0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0D8868(int index);

void func_166248(void)
{
    D_001BF414 = (D_001BF414 & 0xF800FFFFu) | ((unsigned int)D_0024E5C0[90] << 16);
    D_001BF418 = (D_001BF418 & 0xF800FFFFu) | ((unsigned int)D_0024E5C0[128] << 16);
    D_001BF424 = ((int (*)(unsigned int, char *, char *, void *))func_18DC10)(
        ((unsigned int)D_0024E5C0[127] << 16) | 0x800060D9u, D_001BF498, D_001BFB40, 0);
    func_1946F0(&D_001BF41C, D_001BF414, &D_001BF420, D_001BF418, 0);
    func_0D8868(7);
}
