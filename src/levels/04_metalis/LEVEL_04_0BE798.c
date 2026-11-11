/* LEVEL_04:0x0BE798 -- placement copy of LEVEL_01_0B8F90.c. */
extern char *strcpy(char *dst, const char *src);
extern void func_0BE9E0(int index);

extern char D_00215C70[];
extern int D_00215C68[];
extern int D_00215C78[];
extern char D_00215E98[];
extern int D_00215EA8[];
extern char D_00342F48[];

void func_0BE798(int index, char *name, int flag, int value)
{
    if (name != 0 && D_00215C78[index] == 0) {
        D_00215C70[index] = flag;
        strcpy(D_00342F48 + index * 0x100, name);
        D_00215C68[index] = value;
        func_0BE9E0(index);
        if (D_00215EA8[index] != (int)name) {
            D_00215EA8[index] = (int)name;
            D_00215E98[index] = 1;
        }
    }
}
