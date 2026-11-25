/* LEVEL_07:0x1E5900 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_002AD6C0[];
extern int D_0021DF70;
extern int D_0021DF6C;
extern int D_0021DF74;
extern int D_0021DF78;
extern int D_0021DF7C;
extern char D_0021E010[];
extern char D_0021DFF0[];
extern char D_0021E0B0[];
extern char D_0021E0D0[];

extern void func_1F26A0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1E5850(long long, long long, long long, long long);
extern void func_1E5B20(void *head);
extern void func_1EE170(void *a);
extern int func_1DE588(unsigned int id, void *a, void *b, int c);
extern int func_0E4860(unsigned int id);

void func_1E5900(void)
{
    if (D_0021DF70 == -1) {
        func_1F26A0(&D_0021DF70, ((unsigned int)D_002AD6C0[124] << 16) | 0x580064D9u, &D_0021DF6C,
                    ((unsigned int)D_002AD6C0[126] << 16) | 0x580024D9u, 0);
        D_0021DF74 = ((int (*)(unsigned int, char *, char *, void *))func_1E5850)(
            ((unsigned int)D_002AD6C0[125] << 16) | 0x580064D9u, D_0021E0B0, D_0021E010, func_1E5B20);
        func_1EE170(D_0021E0D0);
        D_0021DF78 = func_1DE588(((unsigned int)D_002AD6C0[123] << 16) | 0x580034D9u, D_0021DFF0, D_0021E010, 0);
        D_0021DF7C = func_0E4860(((unsigned int)D_002AD6C0[46] << 16) | 0x580074D9u);
    }
}
