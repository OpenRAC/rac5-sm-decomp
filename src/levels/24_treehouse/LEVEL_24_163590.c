/* LEVEL_24:0x163590 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_00360AA8;
extern unsigned int D_00263EAC;
extern char D_001D9188[];
extern void func_16D3A0(char *record, int other, int value);
extern void func_16BD98(char *a0, int a1, int a2, int a3, int a4);
extern void func_162438(char *);

void func_163590(char *a0)
{
    char *s2;

    func_16D3A0(a0 + 0xF0, D_00360AA8.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_16BD98(a0 + 0x118, (int)D_001D9188, (D_00263EAC << 16) | 0xB800408D, D_00360AA8.f34, D_00360AA8.f38);
    *(char **)(a0 + 0x144) = s2;
    func_162438(a0 + 0x70);
}
