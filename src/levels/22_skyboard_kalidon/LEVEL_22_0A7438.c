extern char *strcpy(char *dst, const char *src);
extern void func_0A76A8(int index);

extern char D_0015BB30[];
extern int D_0015BB28[];
extern int D_0015BB38[];
extern char D_0015BD58[];
extern int D_0015BD68[];
extern char D_0027E308[];

void func_0A7438(int index, char *name, int flag, int value)
{
    if (name != 0 && D_0015BB38[index] == 0) {
        D_0015BB30[index] = flag;
        strcpy(D_0027E308 + index * 0x100, name);
        D_0015BB28[index] = value;
        func_0A76A8(index);
        if (D_0015BD68[index] != (int)name) {
            D_0015BD68[index] = (int)name;
            D_0015BD58[index] = 1;
        }
    }
}
