/* LEVEL_06:0x102E78 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00102278[];
extern char D_00102018[];
extern void func_08F598(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F770(void *out);

int func_102E78(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F598(local, mode | 1u, D_00102278, 80, 0, -1, D_00102018);
    return func_08F770(local);
}
