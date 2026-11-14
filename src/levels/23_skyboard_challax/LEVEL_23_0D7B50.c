/* LEVEL_23:0x0D7B50 -- placement copy of LEVEL_05_0E0DA8.c: builds a command word from the argument, submits it with the fixed tables and finishes the submission. */
extern char D_000D5320[];
extern char D_000D5110[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08C540(void *out);

int func_0D7B50(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode | 1u, D_000D5320, 84, 0, -1, D_000D5110);
    return func_08C540(local);
}
