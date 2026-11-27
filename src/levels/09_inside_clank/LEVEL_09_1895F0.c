/* LEVEL_09:0x1895F0 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0027F540[];
extern unsigned int D_001F25BC;
extern unsigned int D_001F25C0;
extern int D_001F25C4;
extern int D_001F25C8;
extern int D_001F25CC;
extern char D_001F2640[];
extern char D_001F2F00[];

extern void func_1BF800(long long, long long, long long, long long);
extern void func_1CA490(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EB628(int index);

void func_1895F0(void)
{
    D_001F25BC = (D_001F25BC & 0xF800FFFFu) | ((unsigned int)D_0027F540[90] << 16);
    D_001F25C0 = (D_001F25C0 & 0xF800FFFFu) | ((unsigned int)D_0027F540[128] << 16);
    D_001F25CC = ((int (*)(unsigned int, char *, char *, void *))func_1BF800)(
        ((unsigned int)D_0027F540[127] << 16) | 0x800060D9u, D_001F2640, D_001F2F00, 0);
    func_1CA490(&D_001F25C4, D_001F25BC, &D_001F25C8, D_001F25C0, 0);
    func_0EB628(7);
}
