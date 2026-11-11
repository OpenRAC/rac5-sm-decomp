extern char D_001EF0F8[];
extern void func_096CB8(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_096E90(void *out);

int func_1EFE08(unsigned int id) {
    char local[16];
    func_096CB8(local, id, D_001EF0F8, 40, 0, 6, 0);
    return func_096E90(local);
}
