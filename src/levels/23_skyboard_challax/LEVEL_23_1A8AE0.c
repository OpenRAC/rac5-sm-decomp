/* LEVEL_23:0x1A8AE0 -- placement copy of LEVEL_01_1D7148.c: one-time setup: registers the effect handles from the resource table the first time it runs. */
extern int D_00269200[];
extern int D_001DC518;
extern int D_001DC514;
extern int D_001DC51C;
extern int D_001DC520;
extern int D_001DC524;
extern char D_001DC5B8[];
extern char D_001DC598[];
extern char D_001DC658[];
extern char D_001DC678[];

extern void func_1B31A8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_1A8A30(long long, long long, long long, long long);
extern void func_1A8D00(void *head);
extern void func_1B0E38(void *a);
extern int func_1A2FD0(unsigned int id, void *a, void *b, int c);
extern int func_0D7B50(unsigned int id);

void func_1A8AE0(void)
{
    if (D_001DC518 == -1) {
        func_1B31A8(&D_001DC518, ((unsigned int)D_00269200[124] << 16) | 0x580064D9u, &D_001DC514,
                    ((unsigned int)D_00269200[126] << 16) | 0x580024D9u, 0);
        D_001DC51C = ((int (*)(unsigned int, char *, char *, void *))func_1A8A30)(
            ((unsigned int)D_00269200[125] << 16) | 0x580064D9u, D_001DC658, D_001DC5B8, func_1A8D00);
        func_1B0E38(D_001DC678);
        D_001DC520 = func_1A2FD0(((unsigned int)D_00269200[123] << 16) | 0x580034D9u, D_001DC598, D_001DC5B8, 0);
        D_001DC524 = func_0D7B50(((unsigned int)D_00269200[46] << 16) | 0x580074D9u);
    }
}
