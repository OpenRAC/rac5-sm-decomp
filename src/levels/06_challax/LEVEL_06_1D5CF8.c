extern char D_001D4FE8[];
extern void func_08F598(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_08F770(void *out);

int func_1D5CF8(unsigned int id) {
    char local[16];
    func_08F598(local, id, D_001D4FE8, 40, 0, 6, 0);
    return func_08F770(local);
}
