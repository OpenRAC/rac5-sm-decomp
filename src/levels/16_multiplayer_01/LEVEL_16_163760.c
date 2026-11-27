/* LEVEL_16:0x163760 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0024E240[];
extern unsigned int D_001BDEFC;
extern unsigned int D_001BDF00;
extern int D_001BDF04;
extern int D_001BDF08;
extern int D_001BDF0C;
extern char D_001BDF80[];
extern char D_001BE580[];

extern void func_18C770(long long, long long, long long, long long);
extern void func_193250(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0DAAA8(int index);

void func_163760(void)
{
    D_001BDEFC = (D_001BDEFC & 0xF800FFFFu) | ((unsigned int)D_0024E240[90] << 16);
    D_001BDF00 = (D_001BDF00 & 0xF800FFFFu) | ((unsigned int)D_0024E240[128] << 16);
    D_001BDF0C = ((int (*)(unsigned int, char *, char *, void *))func_18C770)(
        ((unsigned int)D_0024E240[127] << 16) | 0x800060D9u, D_001BDF80, D_001BE580, 0);
    func_193250(&D_001BDF04, D_001BDEFC, &D_001BDF08, D_001BDF00, 0);
    func_0DAAA8(7);
}
