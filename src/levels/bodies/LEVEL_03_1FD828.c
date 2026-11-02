extern char D_001FCF28[];
extern void func_096578(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_096750(void *out);

void func_1FD828(void *arg) {
    char local[16];
    func_096578(local, arg, D_001FCF28, 40, 0, 2, 0);
    func_096750(local);
}
