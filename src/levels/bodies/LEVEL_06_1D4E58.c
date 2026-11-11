extern char D_001D4690[];
extern void func_08F598(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_08F770(void *out);

int func_1D4E58(int arg) {
    char local[16];
    func_08F598(local, arg, D_001D4690, 44, 0, 6, 0);
    return func_08F770(local);
}
