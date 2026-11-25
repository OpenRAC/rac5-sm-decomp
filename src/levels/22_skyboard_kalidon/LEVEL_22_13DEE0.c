/* LEVEL_22:0x13DEE0 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_001ED980[];
extern int D_00166B98;
extern int D_00166B94;
extern int D_00166B9C;
extern int D_00166BA0;
extern int D_00166BA4;
extern char D_00166C38[];
extern char D_00166C18[];
extern char D_00166CD8[];
extern char D_00166CF8[];

extern void func_143A58(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_13DE30(long long, long long, long long, long long);
extern void func_13E100(void *head);
extern void func_1416E8(void *a);
extern int func_13CC28(unsigned int id, void *a, void *b, int c);
extern int func_0CED38(unsigned int id);

void func_13DEE0(void)
{
    if (D_00166B98 == -1) {
        func_143A58(&D_00166B98, ((unsigned int)D_001ED980[124] << 16) | 0x580064D9u, &D_00166B94,
                    ((unsigned int)D_001ED980[126] << 16) | 0x580024D9u, 0);
        D_00166B9C = ((int (*)(unsigned int, char *, char *, void *))func_13DE30)(
            ((unsigned int)D_001ED980[125] << 16) | 0x580064D9u, D_00166CD8, D_00166C38, func_13E100);
        func_1416E8(D_00166CF8);
        D_00166BA0 = func_13CC28(((unsigned int)D_001ED980[123] << 16) | 0x580034D9u, D_00166C18, D_00166C38, 0);
        D_00166BA4 = func_0CED38(((unsigned int)D_001ED980[46] << 16) | 0x580074D9u);
    }
}
