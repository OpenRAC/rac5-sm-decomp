/* LEVEL_05:0x1933E8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00283C80[];
extern unsigned int D_001F7954;
extern unsigned int D_001F7958;
extern int D_001F795C;
extern int D_001F7960;
extern int D_001F7964;
extern char D_001F79D8[];
extern char D_001F81F8[];

extern void func_1C6490(long long, long long, long long, long long);
extern void func_1D1120(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EB888(int index);

void func_1933E8(void)
{
    D_001F7954 = (D_001F7954 & 0xF800FFFFu) | ((unsigned int)D_00283C80[90] << 16);
    D_001F7958 = (D_001F7958 & 0xF800FFFFu) | ((unsigned int)D_00283C80[128] << 16);
    D_001F7964 = ((int (*)(unsigned int, char *, char *, void *))func_1C6490)(
        ((unsigned int)D_00283C80[127] << 16) | 0x800060D9u, D_001F79D8, D_001F81F8, 0);
    func_1D1120(&D_001F795C, D_001F7954, &D_001F7960, D_001F7958, 0);
    func_0EB888(7);
}
