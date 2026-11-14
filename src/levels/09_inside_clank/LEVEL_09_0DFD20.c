/* LEVEL_09:0x0DFD20 -- placement copy of LEVEL_05_0E0DA8.c: builds a command word from the argument, submits it with the fixed tables and finishes the submission. */
extern char D_000DD4F0[];
extern char D_000DD2E0[];
extern void func_0930A0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_093278(void *out);

int func_0DFD20(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0930A0(local, mode | 1u, D_000DD4F0, 84, 0, -1, D_000DD2E0);
    return func_093278(local);
}
