/* LEVEL_02:0x1AD940 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002AF2C0[];
extern unsigned int D_0021D894;
extern unsigned int D_0021D898;
extern int D_0021D89C;
extern int D_0021D8A0;
extern int D_0021D8A4;
extern char D_0021D918[];
extern char D_0021E1D0[];

extern void func_1EBD30(long long, long long, long long, long long);
extern void func_1F69C0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0F58F8(int index);

void func_1AD940(void)
{
    D_0021D894 = (D_0021D894 & 0xF800FFFFu) | ((unsigned int)D_002AF2C0[90] << 16);
    D_0021D898 = (D_0021D898 & 0xF800FFFFu) | ((unsigned int)D_002AF2C0[128] << 16);
    D_0021D8A4 = ((int (*)(unsigned int, char *, char *, void *))func_1EBD30)(
        ((unsigned int)D_002AF2C0[127] << 16) | 0x800060D9u, D_0021D918, D_0021E1D0, 0);
    func_1F69C0(&D_0021D89C, D_0021D894, &D_0021D8A0, D_0021D898, 0);
    func_0F58F8(7);
}
