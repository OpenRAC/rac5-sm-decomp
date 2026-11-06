extern char *strcpy(char *dst, const char *src);
extern void func_0BB260(int index);

extern char D_00210AB0[];
extern int D_00210AA8[];
extern int D_00210AB8[];
extern char D_00210CD8[];
extern int D_00210CE8[];
extern char D_0033E048[];

void func_0BAFF0(int index, char *name, int flag, int value)
{
    if (name != 0 && D_00210AB8[index] == 0) {
        D_00210AB0[index] = flag;
        strcpy(D_0033E048 + index * 0x100, name);
        D_00210AA8[index] = value;
        func_0BB260(index);
        if (D_00210CE8[index] != (int)name) {
            D_00210CE8[index] = (int)name;
            D_00210CD8[index] = 1;
        }
    }
}
