/* LEVEL_22:0x0CED38 -- placement copy of LEVEL_05_0E0DA8.c: builds a command word from the argument, submits it with the fixed tables and finishes the submission. */
extern char D_000CC508[];
extern char D_000CC2F8[];
extern void func_087718(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0878F0(void *out);

int func_0CED38(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087718(local, mode | 1u, D_000CC508, 84, 0, -1, D_000CC2F8);
    return func_0878F0(local);
}
