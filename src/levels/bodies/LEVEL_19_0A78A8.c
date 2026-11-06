extern char *strcpy(char *dst, const char *src);
extern void func_0A7B28(int index);

extern char D_001AB9B0[];
extern int D_001AB9A8[];
extern int D_001AB9B8[];
extern char D_001ABBD8[];
extern int D_001ABBE8[];
extern char D_00276808[];

void func_0A78A8(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001AB9B8[index] == 0) {
        D_001AB9B0[index] = flag;
        strcpy(D_00276808 + index * 0x100, name);
        D_001AB9A8[index] = value;
        func_0A7B28(index);
        if (D_001ABBE8[index] != (int)name) {
            D_001ABBE8[index] = (int)name;
            D_001ABBD8[index] = 1;
        }
    }
}
