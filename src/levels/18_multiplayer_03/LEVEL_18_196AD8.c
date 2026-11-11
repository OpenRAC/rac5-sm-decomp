extern char D_00195DA0[];
extern void func_086E78(void *out, int arg, const void *data,
                        int size, int first, int second, int third);
extern int func_087050(void *out);

int func_196AD8(int arg) {
    char local[16];
    func_086E78(local, arg, D_00195DA0, 48, 0, 6, 0);
    return func_087050(local);
}
