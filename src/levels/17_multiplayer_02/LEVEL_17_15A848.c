/* LEVEL_17:0x15A848 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0023F540[];
extern unsigned int D_001B14AC;
extern unsigned int D_001B14B0;
extern int D_001B14B4;
extern int D_001B14B8;
extern int D_001B14BC;
extern char D_001B1530[];
extern char D_001B1A58[];

extern void func_17FDB8(long long, long long, long long, long long);
extern void func_186898(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0D99D0(int index);

void func_15A848(void)
{
    D_001B14AC = (D_001B14AC & 0xF800FFFFu) | ((unsigned int)D_0023F540[90] << 16);
    D_001B14B0 = (D_001B14B0 & 0xF800FFFFu) | ((unsigned int)D_0023F540[128] << 16);
    D_001B14BC = ((int (*)(unsigned int, char *, char *, void *))func_17FDB8)(
        ((unsigned int)D_0023F540[127] << 16) | 0x800060D9u, D_001B1530, D_001B1A58, 0);
    func_186898(&D_001B14B4, D_001B14AC, &D_001B14B8, D_001B14B0, 0);
    func_0D99D0(7);
}
