extern char D_00187620[];
extern void func_096578(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_096750(void *out);

void func_1889C0(void *arg) {
    char local[16];
    func_096578(local, arg, D_00187620, 52, 0, -1, 0);
    func_096750(local);
}
