/* LEVEL_24:0x1A8EB0 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_00263C80[];
extern int D_001DA100;
extern int D_001DA0FC;
extern int D_001DA104;
extern int D_001DA108;
extern int D_001DA10C;
extern char D_001DA1A0[];
extern char D_001DA180[];
extern char D_001DA240[];
extern char D_001DA260[];

extern void func_1B3578(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1A8E00(long long, long long, long long, long long);
extern void func_1A90D0(void *head);
extern void func_1B1208(void *a);
extern int func_1A1B38(unsigned int id, void *a, void *b, int c);
extern int func_0DA688(unsigned int id);

void func_1A8EB0(void)
{
    if (D_001DA100 == -1) {
        func_1B3578(&D_001DA100, ((unsigned int)D_00263C80[124] << 16) | 0x580064D9u, &D_001DA0FC,
                    ((unsigned int)D_00263C80[126] << 16) | 0x580024D9u, 0);
        D_001DA104 = ((int (*)(unsigned int, char *, char *, void *))func_1A8E00)(
            ((unsigned int)D_00263C80[125] << 16) | 0x580064D9u, D_001DA240, D_001DA1A0, func_1A90D0);
        func_1B1208(D_001DA260);
        D_001DA108 = func_1A1B38(((unsigned int)D_00263C80[123] << 16) | 0x580034D9u, D_001DA180, D_001DA1A0, 0);
        D_001DA10C = func_0DA688(((unsigned int)D_00263C80[46] << 16) | 0x580074D9u);
    }
}
