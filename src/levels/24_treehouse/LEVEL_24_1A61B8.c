/* LEVEL_24:0x1A61B8 -- placement copy of LEVEL_01_1D4450.c. */
extern char D_001A6408[];
extern char D_001A6278[];
extern void func_08F748(unsigned int *record, unsigned int first, unsigned int second,
                        int third, int fourth, int fifth, unsigned int sixth);
extern void func_08F920(void *out);

void func_1A61B8(unsigned int value) {
    unsigned int local[4];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode, (unsigned int)D_001A6408, 60, 0, -1, (unsigned int)D_001A6278);
    func_08F920(local);
}
