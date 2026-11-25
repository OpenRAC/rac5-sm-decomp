/* LEVEL_05:0x1C6540 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_00283C80[];
extern int D_001F8210;
extern int D_001F820C;
extern int D_001F8214;
extern int D_001F8218;
extern int D_001F821C;
extern char D_001F82B0[];
extern char D_001F8290[];
extern char D_001F8350[];
extern char D_001F8370[];

extern void func_1D1120(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1C6490(long long, long long, long long, long long);
extern void func_1C6760(void *head);
extern void func_1CEDB0(void *a);
extern int func_1C0A30(unsigned int id, void *a, void *b, int c);
extern int func_0E0DA8(unsigned int id);

void func_1C6540(void)
{
    if (D_001F8210 == -1) {
        func_1D1120(&D_001F8210, ((unsigned int)D_00283C80[124] << 16) | 0x580064D9u, &D_001F820C,
                    ((unsigned int)D_00283C80[126] << 16) | 0x580024D9u, 0);
        D_001F8214 = ((int (*)(unsigned int, char *, char *, void *))func_1C6490)(
            ((unsigned int)D_00283C80[125] << 16) | 0x580064D9u, D_001F8350, D_001F82B0, func_1C6760);
        func_1CEDB0(D_001F8370);
        D_001F8218 = func_1C0A30(((unsigned int)D_00283C80[123] << 16) | 0x580034D9u, D_001F8290, D_001F82B0, 0);
        D_001F821C = func_0E0DA8(((unsigned int)D_00283C80[46] << 16) | 0x580074D9u);
    }
}
