extern char *strcpy(char *dst, const char *src);
extern void func_0B3B00(int index);

extern char D_001EB6B0[];
extern int D_001EB6A8[];
extern int D_001EB6B8[];
extern char D_001EB8D8[];
extern int D_001EB8E8[];
extern char D_003154C8[];

void func_0B3890(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001EB6B8[index] == 0) {
        D_001EB6B0[index] = flag;
        strcpy(D_003154C8 + index * 0x100, name);
        D_001EB6A8[index] = value;
        func_0B3B00(index);
        if (D_001EB8E8[index] != (int)name) {
            D_001EB8E8[index] = (int)name;
            D_001EB8D8[index] = 1;
        }
    }
}
