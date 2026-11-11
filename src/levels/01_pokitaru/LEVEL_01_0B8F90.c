extern char *strcpy(char *dst, const char *src);
extern void func_0B9200(int index);

extern char D_001FC7B0[];
extern int D_001FC7A8[];
extern int D_001FC7B8[];
extern char D_001FC9D8[];
extern int D_001FC9E8[];
extern char D_00328748[];

void func_0B8F90(int index, char *name, int flag, int value)
{
    if (name != 0 && D_001FC7B8[index] == 0) {
        D_001FC7B0[index] = flag;
        strcpy(D_00328748 + index * 0x100, name);
        D_001FC7A8[index] = value;
        func_0B9200(index);
        if (D_001FC9E8[index] != (int)name) {
            D_001FC9E8[index] = (int)name;
            D_001FC9D8[index] = 1;
        }
    }
}
