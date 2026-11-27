/* LEVEL_02:0x1ACCC8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002AF2C0[];
extern unsigned int D_0021D7EC;
extern unsigned int D_0021D7F0;
extern int D_0021D7F4;
extern int D_0021D7F8;
extern int D_0021D7FC;
extern char D_0021D870[];
extern char D_0021E1D0[];

extern void func_1EBD30(long long, long long, long long, long long);
extern void func_1F69C0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0F58F8(int index);

void func_1ACCC8(void)
{
    D_0021D7EC = (D_0021D7EC & 0xF800FFFFu) | ((unsigned int)D_002AF2C0[90] << 16);
    D_0021D7F0 = (D_0021D7F0 & 0xF800FFFFu) | ((unsigned int)D_002AF2C0[128] << 16);
    D_0021D7FC = ((int (*)(unsigned int, char *, char *, void *))func_1EBD30)(
        ((unsigned int)D_002AF2C0[127] << 16) | 0x800060D9u, D_0021D870, D_0021E1D0, 0);
    func_1F69C0(&D_0021D7F4, D_0021D7EC, &D_0021D7F8, D_0021D7F0, 0);
    func_0F58F8(7);
}
