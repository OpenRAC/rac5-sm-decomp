extern char D_0017A138[];
extern void func_08F598(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_08F770(void *out);

void func_17B4D8(void *arg) {
    char local[16];
    func_08F598(local, arg, D_0017A138, 52, 0, -1, 0);
    func_08F770(local);
}
