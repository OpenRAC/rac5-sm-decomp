/* LEVEL_24:0x0DA688 -- placement copy of LEVEL_05_0E0DA8.c: builds a command word from the argument, submits it with the fixed tables and finishes the submission. */
extern char D_000D7E58[];
extern char D_000D7C48[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F920(void *out);

int func_0DA688(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, D_000D7E58, 84, 0, -1, D_000D7C48);
    return func_08F920(local);
}
