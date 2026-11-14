/* LEVEL_05:0x0E0DA8 -- builds a command word from the argument, submits it with the fixed tables and finishes the submission. */
extern char D_000DE578[];
extern char D_000DE368[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_094218(void *out);

int func_0E0DA8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode | 1u, D_000DE578, 84, 0, -1, D_000DE368);
    return func_094218(local);
}
