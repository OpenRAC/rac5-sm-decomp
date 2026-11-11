/* LEVEL_10:0x180BA0 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_0039FEE0;
extern unsigned int D_002A13EC;
extern char D_00211070[];
extern void func_18A9B0(char *record, int other, int value);
extern void func_1893A8(char *a0, int a1, int a2, int a3, int a4);
extern void func_17FA48(char *);

void func_180BA0(char *a0)
{
    char *s2;

    func_18A9B0(a0 + 0xF0, D_0039FEE0.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_1893A8(a0 + 0x118, (int)D_00211070, (D_002A13EC << 16) | 0xB800408D, D_0039FEE0.f34, D_0039FEE0.f38);
    *(char **)(a0 + 0x144) = s2;
    func_17FA48(a0 + 0x70);
}
