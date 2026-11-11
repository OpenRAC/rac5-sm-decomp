extern char *strcpy(char *dst, const char *src);
extern void func_092780(int index);

extern char D_0010CF10[];
extern int D_0010CF08[];
extern int D_0010CF18[];
extern char D_0010D138[];
extern int D_0010D148[];
extern char D_00199EC8[];

void func_092500(int index, char *name, int flag, int value)
{
    if (name != 0 && D_0010CF18[index] == 0) {
        D_0010CF10[index] = flag;
        strcpy(D_00199EC8 + index * 0x100, name);
        D_0010CF08[index] = value;
        func_092780(index);
        if (D_0010D148[index] != (int)name) {
            D_0010D148[index] = (int)name;
            D_0010D138[index] = 1;
        }
    }
}
