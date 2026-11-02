extern char D_00200448[];
extern void func_099A40(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern void func_099C18(void *out);

void func_200D08(void *arg) {
    char local[16];
    func_099A40(local, arg, D_00200448, 32, 0, 2, 0);
    func_099C18(local);
}
