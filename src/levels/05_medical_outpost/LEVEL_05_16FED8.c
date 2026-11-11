/* LEVEL_05:0x16FED8 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_003827B0;
extern unsigned int D_00283EAC;
extern char D_001F7120[];
extern void func_179CE8(char *record, int other, int value);
extern void func_1786E0(char *a0, int a1, int a2, int a3, int a4);
extern void func_16ED80(char *);

void func_16FED8(char *a0)
{
    char *s2;

    func_179CE8(a0 + 0xF0, D_003827B0.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_1786E0(a0 + 0x118, (int)D_001F7120, (D_00283EAC << 16) | 0xB800408D, D_003827B0.f34, D_003827B0.f38);
    *(char **)(a0 + 0x144) = s2;
    func_16ED80(a0 + 0x70);
}
