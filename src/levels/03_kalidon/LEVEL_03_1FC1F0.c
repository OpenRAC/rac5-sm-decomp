extern char D_001FB4B8[];
extern void func_096578(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096750(void *out);

int func_1FC1F0(int arg) {
    char local[16];
    func_096578(local, arg, D_001FB4B8, 48, 0, 6, 0);
    return func_096750(local);
}
