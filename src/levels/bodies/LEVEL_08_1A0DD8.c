/* LEVEL_08:0x1A0DD8 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_003E79D8;
extern unsigned int D_002E726C;
extern char D_00251670[];
extern void func_1AABE8(char *record, int other, int value);
extern void func_1A95E0(char *a0, int a1, int a2, int a3, int a4);
extern void func_19FC80(char *);

void func_1A0DD8(char *a0)
{
    char *s2;

    func_1AABE8(a0 + 0xF0, D_003E79D8.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_1A95E0(a0 + 0x118, (int)D_00251670, (D_002E726C << 16) | 0xB800408D, D_003E79D8.f34, D_003E79D8.f38);
    *(char **)(a0 + 0x144) = s2;
    func_19FC80(a0 + 0x70);
}
