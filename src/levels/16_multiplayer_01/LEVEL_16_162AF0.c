/* LEVEL_16:0x162AF0 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0024E240[];
extern unsigned int D_001BDE54;
extern unsigned int D_001BDE58;
extern int D_001BDE5C;
extern int D_001BDE60;
extern int D_001BDE64;
extern char D_001BDED8[];
extern char D_001BE580[];

extern void func_18C770(long long, long long, long long, long long);
extern void func_193250(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0DAAA8(int index);

void func_162AF0(void)
{
    D_001BDE54 = (D_001BDE54 & 0xF800FFFFu) | ((unsigned int)D_0024E240[90] << 16);
    D_001BDE58 = (D_001BDE58 & 0xF800FFFFu) | ((unsigned int)D_0024E240[128] << 16);
    D_001BDE64 = ((int (*)(unsigned int, char *, char *, void *))func_18C770)(
        ((unsigned int)D_0024E240[127] << 16) | 0x800060D9u, D_001BDED8, D_001BE580, 0);
    func_193250(&D_001BDE5C, D_001BDE54, &D_001BDE60, D_001BDE58, 0);
    func_0DAAA8(7);
}
