/* LEVEL_07:0x18B640 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_003AC408;
extern unsigned int D_002AD8EC;
extern char D_0021CA28[];
extern void func_195450(char *record, int other, int value);
extern void func_193E48(char *a0, int a1, int a2, int a3, int a4);
extern void func_18A4E8(char *);

void func_18B640(char *a0)
{
    char *s2;

    func_195450(a0 + 0xF0, D_003AC408.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_193E48(a0 + 0x118, (int)D_0021CA28, (D_002AD8EC << 16) | 0xB800408D, D_003AC408.f34, D_003AC408.f38);
    *(char **)(a0 + 0x144) = s2;
    func_18A4E8(a0 + 0x70);
}
