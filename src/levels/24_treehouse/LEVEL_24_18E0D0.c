/* LEVEL_24:0x18E0D0 -- placement copy of LEVEL_01_1B1DC8.c. */
extern char D_0018D450[];
extern char D_0018D2C0[];
extern void func_08F748(unsigned int *record, unsigned int first, unsigned int second,
                        int third, int fourth, int fifth, unsigned int sixth);
extern void func_08F920(void *out);

void func_18E0D0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748((unsigned int *)local, mode | 1u, (unsigned int)D_0018D450, 60, 0, -1, (unsigned int)D_0018D2C0);
    func_08F920(local);
}
