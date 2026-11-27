/* LEVEL_10:0x197C68 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002A11C0[];
extern unsigned int D_00211724;
extern unsigned int D_00211728;
extern int D_0021172C;
extern int D_00211730;
extern int D_00211734;
extern char D_002117A8[];
extern char D_002121F8[];

extern void func_1DCCA8(long long, long long, long long, long long);
extern void func_1E9680(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EF088(int index);

void func_197C68(void)
{
    D_00211724 = (D_00211724 & 0xF800FFFFu) | ((unsigned int)D_002A11C0[90] << 16);
    D_00211728 = (D_00211728 & 0xF800FFFFu) | ((unsigned int)D_002A11C0[128] << 16);
    D_00211734 = ((int (*)(unsigned int, char *, char *, void *))func_1DCCA8)(
        ((unsigned int)D_002A11C0[127] << 16) | 0x800060D9u, D_002117A8, D_002121F8, 0);
    func_1E9680(&D_0021172C, D_00211724, &D_00211730, D_00211728, 0);
    func_0EF088(7);
}
