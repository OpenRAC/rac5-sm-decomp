extern char *strcpy(char *dst, const char *src);
extern void func_0BFB10(int index);

extern char D_00211770[];
extern int D_00211768[];
extern int D_00211778[];
extern char D_00211998[];
extern int D_002119A8[];
extern char D_0033FC48[];

void func_0BF8A0(int index, char *name, int flag, int value)
{
    if (name != 0 && D_00211778[index] == 0) {
        D_00211770[index] = flag;
        strcpy(D_0033FC48 + index * 0x100, name);
        D_00211768[index] = value;
        func_0BFB10(index);
        if (D_002119A8[index] != (int)name) {
            D_002119A8[index] = (int)name;
            D_00211998[index] = 1;
        }
    }
}
