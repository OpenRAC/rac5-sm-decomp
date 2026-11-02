extern char D_00195DA0[];
extern void func_086E78(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_087050(void *out);

void func_196AD8(void *arg) {
    char local[16];
    func_086E78(local, arg, D_00195DA0, 48, 0, 6, 0);
    func_087050(local);
}
