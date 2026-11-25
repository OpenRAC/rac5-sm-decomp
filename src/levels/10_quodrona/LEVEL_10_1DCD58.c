/* LEVEL_10:0x1DCD58 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_002A11C0[];
extern int D_00212210;
extern int D_0021220C;
extern int D_00212214;
extern int D_00212218;
extern int D_0021221C;
extern char D_002122B0[];
extern char D_00212290[];
extern char D_00212350[];
extern char D_00212370[];

extern void func_1E9680(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1DCCA8(long long, long long, long long, long long);
extern void func_1DCF78(void *head);
extern void func_1E7310(void *a);
extern int func_1D59E0(unsigned int id, void *a, void *b, int c);
extern int func_0E4608(unsigned int id);

void func_1DCD58(void)
{
    if (D_00212210 == -1) {
        func_1E9680(&D_00212210, ((unsigned int)D_002A11C0[124] << 16) | 0x580064D9u, &D_0021220C,
                    ((unsigned int)D_002A11C0[126] << 16) | 0x580024D9u, 0);
        D_00212214 = ((int (*)(unsigned int, char *, char *, void *))func_1DCCA8)(
            ((unsigned int)D_002A11C0[125] << 16) | 0x580064D9u, D_00212350, D_002122B0, func_1DCF78);
        func_1E7310(D_00212370);
        D_00212218 = func_1D59E0(((unsigned int)D_002A11C0[123] << 16) | 0x580034D9u, D_00212290, D_002122B0, 0);
        D_0021221C = func_0E4608(((unsigned int)D_002A11C0[46] << 16) | 0x580074D9u);
    }
}
