extern char D_001B6D78[];
extern void func_08F748(char *, unsigned int, char *, int, int, int, int);
extern int func_08F920(char *);

int func_1B7A88(unsigned int id) {
    char scratch[16];
    func_08F748(scratch, id, D_001B6D78, 0x28, 0, 6, 0);
    return func_08F920(scratch);
}
