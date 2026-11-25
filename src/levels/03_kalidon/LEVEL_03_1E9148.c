/* LEVEL_03:0x1E9148 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_002B2C40[];
extern int D_00222160;
extern int D_0022215C;
extern int D_00222164;
extern int D_00222168;
extern int D_0022216C;
extern char D_00222200[];
extern char D_002221E0[];
extern char D_002222A0[];
extern char D_002222C0[];

extern void func_1F8CB8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1E9098(long long, long long, long long, long long);
extern void func_1E9368(void *head);
extern void func_1F4788(void *a);
extern int func_1E1DD0(unsigned int id, void *a, void *b, int c);
extern int func_0E2FB0(unsigned int id);

void func_1E9148(void)
{
    if (D_00222160 == -1) {
        func_1F8CB8(&D_00222160, ((unsigned int)D_002B2C40[124] << 16) | 0x580064D9u, &D_0022215C,
                    ((unsigned int)D_002B2C40[126] << 16) | 0x580024D9u, 0);
        D_00222164 = ((int (*)(unsigned int, char *, char *, void *))func_1E9098)(
            ((unsigned int)D_002B2C40[125] << 16) | 0x580064D9u, D_002222A0, D_00222200, func_1E9368);
        func_1F4788(D_002222C0);
        D_00222168 = func_1E1DD0(((unsigned int)D_002B2C40[123] << 16) | 0x580034D9u, D_002221E0, D_00222200, 0);
        D_0022216C = func_0E2FB0(((unsigned int)D_002B2C40[46] << 16) | 0x580074D9u);
    }
}
