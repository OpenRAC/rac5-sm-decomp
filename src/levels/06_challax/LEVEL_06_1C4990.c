/* LEVEL_06:0x1C4990 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_00284B40[];
extern int D_001F8150;
extern int D_001F814C;
extern int D_001F8154;
extern int D_001F8158;
extern int D_001F815C;
extern char D_001F81F0[];
extern char D_001F81D0[];
extern char D_001F8290[];
extern char D_001F82B0[];

extern void func_1CF570(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1C48E0(long long, long long, long long, long long);
extern void func_1C4BB0(void *head);
extern void func_1CD200(void *a);
extern int func_1BD618(unsigned int id, void *a, void *b, int c);
extern int func_0DDAC8(unsigned int id);

void func_1C4990(void)
{
    if (D_001F8150 == -1) {
        func_1CF570(&D_001F8150, ((unsigned int)D_00284B40[124] << 16) | 0x580064D9u, &D_001F814C,
                    ((unsigned int)D_00284B40[126] << 16) | 0x580024D9u, 0);
        D_001F8154 = ((int (*)(unsigned int, char *, char *, void *))func_1C48E0)(
            ((unsigned int)D_00284B40[125] << 16) | 0x580064D9u, D_001F8290, D_001F81F0, func_1C4BB0);
        func_1CD200(D_001F82B0);
        D_001F8158 = func_1BD618(((unsigned int)D_00284B40[123] << 16) | 0x580034D9u, D_001F81D0, D_001F81F0, 0);
        D_001F815C = func_0DDAC8(((unsigned int)D_00284B40[46] << 16) | 0x580074D9u);
    }
}
