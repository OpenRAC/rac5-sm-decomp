extern char D_0022AF48[];
extern void func_09E868(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_09EA40(void *out);

int func_22BC58(unsigned int id) {
    char local[16];
    func_09E868(local, id, D_0022AF48, 40, 0, 6, 0);
    return func_09EA40(local);
}
