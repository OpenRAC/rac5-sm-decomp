/* LEVEL_19:0x162158 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0024E3C0[];
extern unsigned int D_001BF0B4;
extern unsigned int D_001BF0B8;
extern int D_001BF0BC;
extern int D_001BF0C0;
extern int D_001BF0C4;
extern char D_001BF138[];
extern char D_001BF788[];

extern void func_189508(long long, long long, long long, long long);
extern void func_193568(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0D9168(int index);

void func_162158(void)
{
    D_001BF0B4 = (D_001BF0B4 & 0xF800FFFFu) | ((unsigned int)D_0024E3C0[90] << 16);
    D_001BF0B8 = (D_001BF0B8 & 0xF800FFFFu) | ((unsigned int)D_0024E3C0[128] << 16);
    D_001BF0C4 = ((int (*)(unsigned int, char *, char *, void *))func_189508)(
        ((unsigned int)D_0024E3C0[127] << 16) | 0x800060D9u, D_001BF138, D_001BF788, 0);
    func_193568(&D_001BF0BC, D_001BF0B4, &D_001BF0C0, D_001BF0B8, 0);
    func_0D9168(7);
}
