/* LEVEL_09:0x18A268 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_0027F540[];
extern unsigned int D_001F2664;
extern unsigned int D_001F2668;
extern int D_001F266C;
extern int D_001F2670;
extern int D_001F2674;
extern char D_001F26E8[];
extern char D_001F2F00[];

extern void func_1BF800(long long, long long, long long, long long);
extern void func_1CA490(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EB628(int index);

void func_18A268(void)
{
    D_001F2664 = (D_001F2664 & 0xF800FFFFu) | ((unsigned int)D_0027F540[90] << 16);
    D_001F2668 = (D_001F2668 & 0xF800FFFFu) | ((unsigned int)D_0027F540[128] << 16);
    D_001F2674 = ((int (*)(unsigned int, char *, char *, void *))func_1BF800)(
        ((unsigned int)D_0027F540[127] << 16) | 0x800060D9u, D_001F26E8, D_001F2F00, 0);
    func_1CA490(&D_001F266C, D_001F2664, &D_001F2670, D_001F2668, 0);
    func_0EB628(7);
}
