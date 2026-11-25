/* LEVEL_09:0x1BF8B0 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_0027F540[];
extern int D_001F2F18;
extern int D_001F2F14;
extern int D_001F2F1C;
extern int D_001F2F20;
extern int D_001F2F24;
extern char D_001F2FB8[];
extern char D_001F2F98[];
extern char D_001F3058[];
extern char D_001F3078[];

extern void func_1CA490(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1BF800(long long, long long, long long, long long);
extern void func_1BFAD0(void *head);
extern void func_1C8120(void *a);
extern int func_1B8538(unsigned int id, void *a, void *b, int c);
extern int func_0DFD20(unsigned int id);

void func_1BF8B0(void)
{
    if (D_001F2F18 == -1) {
        func_1CA490(&D_001F2F18, ((unsigned int)D_0027F540[124] << 16) | 0x580064D9u, &D_001F2F14,
                    ((unsigned int)D_0027F540[126] << 16) | 0x580024D9u, 0);
        D_001F2F1C = ((int (*)(unsigned int, char *, char *, void *))func_1BF800)(
            ((unsigned int)D_0027F540[125] << 16) | 0x580064D9u, D_001F3058, D_001F2FB8, func_1BFAD0);
        func_1C8120(D_001F3078);
        D_001F2F20 = func_1B8538(((unsigned int)D_0027F540[123] << 16) | 0x580034D9u, D_001F2F98, D_001F2FB8, 0);
        D_001F2F24 = func_0DFD20(((unsigned int)D_0027F540[46] << 16) | 0x580074D9u);
    }
}
