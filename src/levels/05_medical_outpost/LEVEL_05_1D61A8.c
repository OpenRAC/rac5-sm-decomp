extern char D_001D5498[];
extern void func_094040(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_094218(void *out);

int func_1D61A8(unsigned int id) {
    char local[16];
    func_094040(local, id, D_001D5498, 40, 0, 6, 0);
    return func_094218(local);
}
