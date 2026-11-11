extern char D_00187F48[];
extern void func_087F70(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_088148(void *out);

int func_188C80(int arg) {
    char local[16];
    func_087F70(local, arg, D_00187F48, 48, 0, 6, 0);
    return func_088148(local);
}
