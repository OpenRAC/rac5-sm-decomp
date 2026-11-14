/* LEVEL_07:0x0E4860 -- placement copy of LEVEL_05_0E0DA8.c: builds a command word from the argument, submits it with the fixed tables and finishes the submission. */
extern char D_000E2030[];
extern char D_000E1E20[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0989A8(void *out);

int func_0E4860(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode | 1u, D_000E2030, 84, 0, -1, D_000E1E20);
    return func_0989A8(local);
}
