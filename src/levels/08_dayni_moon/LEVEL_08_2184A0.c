/* LEVEL_08:0x2184A0 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_002E7040[];
extern int D_00252D88;
extern int D_00252D84;
extern int D_00252D8C;
extern int D_00252D90;
extern int D_00252D94;
extern char D_00252E28[];
extern char D_00252E08[];
extern char D_00252EC8[];
extern char D_00252EE8[];

extern void func_2254D0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_2183F0(long long, long long, long long, long long);
extern void func_2186C0(void *head);
extern void func_223160(void *a);
extern int func_211128(unsigned int id, void *a, void *b, int c);
extern int func_0EE198(unsigned int id);

void func_2184A0(void)
{
    if (D_00252D88 == -1) {
        func_2254D0(&D_00252D88, ((unsigned int)D_002E7040[124] << 16) | 0x580064D9u, &D_00252D84,
                    ((unsigned int)D_002E7040[126] << 16) | 0x580024D9u, 0);
        D_00252D8C = ((int (*)(unsigned int, char *, char *, void *))func_2183F0)(
            ((unsigned int)D_002E7040[125] << 16) | 0x580064D9u, D_00252EC8, D_00252E28, func_2186C0);
        func_223160(D_00252EE8);
        D_00252D90 = func_211128(((unsigned int)D_002E7040[123] << 16) | 0x580034D9u, D_00252E08, D_00252E28, 0);
        D_00252D94 = func_0EE198(((unsigned int)D_002E7040[46] << 16) | 0x580074D9u);
    }
}
