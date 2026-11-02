extern char D_001D37E0[];
extern void func_08F598(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08F770(void *out);

void func_1D40E0(void *arg) {
    char local[16];
    func_08F598(local, arg, D_001D37E0, 40, 0, 2, 0);
    func_08F770(local);
}
