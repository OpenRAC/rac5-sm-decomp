/* LEVEL_17:0x159BD8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0023F540[];
extern unsigned int D_001B1404;
extern unsigned int D_001B1408;
extern int D_001B140C;
extern int D_001B1410;
extern int D_001B1414;
extern char D_001B1488[];
extern char D_001B1A58[];

extern void func_17FDB8(long long, long long, long long, long long);
extern void func_186898(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0D99D0(int index);

void func_159BD8(void)
{
    D_001B1404 = (D_001B1404 & 0xF800FFFFu) | ((unsigned int)D_0023F540[90] << 16);
    D_001B1408 = (D_001B1408 & 0xF800FFFFu) | ((unsigned int)D_0023F540[128] << 16);
    D_001B1414 = ((int (*)(unsigned int, char *, char *, void *))func_17FDB8)(
        ((unsigned int)D_0023F540[127] << 16) | 0x800060D9u, D_001B1488, D_001B1A58, 0);
    func_186898(&D_001B140C, D_001B1404, &D_001B1410, D_001B1408, 0);
    func_0D99D0(7);
}
