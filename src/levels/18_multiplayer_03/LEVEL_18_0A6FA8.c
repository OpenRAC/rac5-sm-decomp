extern char *strcpy(char *dst, const char *src);
extern void func_0A7228(int index);

extern char D_001ABCB0[];
extern int D_001ABCA8[];
extern int D_001ABCB8[];
extern char D_001ABED8[];
extern int D_001ABEE8[];
extern char D_00276A08[];

void func_0A6FA8(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001ABCB8[index] == 0) {
        D_001ABCB0[index] = flag;
        strcpy(D_00276A08 + index * 0x100, name);
        D_001ABCA8[index] = value;
        func_0A7228(index);
        if (D_001ABEE8[index] != (int)name) {
            D_001ABEE8[index] = (int)name;
            D_001ABED8[index] = 1;
        }
    }
}
