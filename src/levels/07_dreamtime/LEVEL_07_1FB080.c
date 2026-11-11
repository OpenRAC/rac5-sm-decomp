extern char D_001FA370[];
extern void func_0987D0(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_0989A8(void *out);

int func_1FB080(unsigned int id) {
    char local[16];
    func_0987D0(local, id, D_001FA370, 40, 0, 6, 0);
    return func_0989A8(local);
}
