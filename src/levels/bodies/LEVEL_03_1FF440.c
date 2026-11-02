extern char D_001FE730[];
extern void func_096578(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_096750(void *out);

void func_1FF440(void *arg) {
    char local[16];
    func_096578(local, arg, D_001FE730, 40, 0, 6, 0);
    func_096750(local);
}
