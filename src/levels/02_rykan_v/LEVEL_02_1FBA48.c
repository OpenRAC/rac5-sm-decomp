extern char D_001FAD38[];
extern void func_09D018(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_09D1F0(void *out);

int func_1FBA48(unsigned int id) {
    char local[16];
    func_09D018(local, id, D_001FAD38, 40, 0, 6, 0);
    return func_09D1F0(local);
}
