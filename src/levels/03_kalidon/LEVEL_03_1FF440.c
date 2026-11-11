extern char D_001FE730[];
extern void func_096578(void *out, unsigned int id, const void *data,
                        int size, int first, int second, int third);
extern int func_096750(void *out);

int func_1FF440(unsigned int id) {
    char local[16];
    func_096578(local, id, D_001FE730, 40, 0, 6, 0);
    return func_096750(local);
}
