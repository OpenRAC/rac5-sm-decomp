/* LEVEL_03:0x17EC70 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_003B1988;
extern unsigned int D_002B2E6C;
extern char D_00220AD8[];
extern void func_188A80(char *record, int other, int value);
extern void func_187478(char *a0, int a1, int a2, int a3, int a4);
extern void func_17DB18(char *);

void func_17EC70(char *a0)
{
    char *s2;

    func_188A80(a0 + 0xF0, D_003B1988.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_187478(a0 + 0x118, (int)D_00220AD8, (D_002B2E6C << 16) | 0xB800408D, D_003B1988.f34, D_003B1988.f38);
    *(char **)(a0 + 0x144) = s2;
    func_17DB18(a0 + 0x70);
}
