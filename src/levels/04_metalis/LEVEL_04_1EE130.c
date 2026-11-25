/* LEVEL_04:0x1EE130 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_002B25C0[];
extern int D_00222B80;
extern int D_00222B7C;
extern int D_00222B84;
extern int D_00222B88;
extern int D_00222B8C;
extern char D_00222C20[];
extern char D_00222C00[];
extern char D_00222CC0[];
extern char D_00222CE0[];

extern void func_1F9EC8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1EE080(long long, long long, long long, long long);
extern void func_1EE350(void *head);
extern void func_1F7B58(void *a);
extern int func_1E8620(unsigned int id, void *a, void *b, int c);
extern int func_0E8A88(unsigned int id);

void func_1EE130(void)
{
    if (D_00222B80 == -1) {
        func_1F9EC8(&D_00222B80, ((unsigned int)D_002B25C0[124] << 16) | 0x580064D9u, &D_00222B7C,
                    ((unsigned int)D_002B25C0[126] << 16) | 0x580024D9u, 0);
        D_00222B84 = ((int (*)(unsigned int, char *, char *, void *))func_1EE080)(
            ((unsigned int)D_002B25C0[125] << 16) | 0x580064D9u, D_00222CC0, D_00222C20, func_1EE350);
        func_1F7B58(D_00222CE0);
        D_00222B88 = func_1E8620(((unsigned int)D_002B25C0[123] << 16) | 0x580034D9u, D_00222C00, D_00222C20, 0);
        D_00222B8C = func_0E8A88(((unsigned int)D_002B25C0[46] << 16) | 0x580074D9u);
    }
}
