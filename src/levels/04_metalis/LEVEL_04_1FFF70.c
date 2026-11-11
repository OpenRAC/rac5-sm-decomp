extern char D_001FF260[];
extern void func_099A40(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_099C18(void *out);

int func_1FFF70(unsigned int id) {
    char local[16];
    func_099A40(local, id, D_001FF260, 40, 0, 6, 0);
    return func_099C18(local);
}
