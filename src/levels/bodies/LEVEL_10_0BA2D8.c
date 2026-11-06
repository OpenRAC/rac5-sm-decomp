extern char *strcpy(char *dst, const char *src);
extern void func_0BA548(int index);

extern char D_002057B0[];
extern int D_002057A8[];
extern int D_002057B8[];
extern char D_002059D8[];
extern int D_002059E8[];
extern char D_00331B48[];

void func_0BA2D8(int index, char *name, int flag, int value)
{
    if (name != 0 && D_002057B8[index] == 0) {
        D_002057B0[index] = flag;
        strcpy(D_00331B48 + index * 0x100, name);
        D_002057A8[index] = value;
        func_0BA548(index);
        if (D_002059E8[index] != (int)name) {
            D_002059E8[index] = (int)name;
            D_002059D8[index] = 1;
        }
    }
}
