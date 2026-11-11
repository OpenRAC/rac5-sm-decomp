extern char D_001B4158[];
extern void func_08C368(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_08C540(void *out);

int func_1B4E68(unsigned int id) {
    char local[16];
    func_08C368(local, id, D_001B4158, 40, 0, 6, 0);
    return func_08C540(local);
}
