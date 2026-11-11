/* LEVEL_23:0x169448 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_00364F58;
extern unsigned int D_0026942C;
extern char D_001DB730[];
extern void func_173258(char *record, int other, int value);
extern void func_171C50(char *a0, int a1, int a2, int a3, int a4);
extern void func_1682F0(char *);

void func_169448(char *a0)
{
    char *s2;

    func_173258(a0 + 0xF0, D_00364F58.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_171C50(a0 + 0x118, (int)D_001DB730, (D_0026942C << 16) | 0xB800408D, D_00364F58.f34, D_00364F58.f38);
    *(char **)(a0 + 0x144) = s2;
    func_1682F0(a0 + 0x70);
}
