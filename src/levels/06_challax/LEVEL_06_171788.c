/* LEVEL_06:0x171788 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_003837F8;
extern unsigned int D_00284D6C;
extern char D_001F7018[];
extern void func_17B598(char *record, int other, int value);
extern void func_179F90(char *a0, int a1, int a2, int a3, int a4);
extern void func_170630(char *);

void func_171788(char *a0)
{
    char *s2;

    func_17B598(a0 + 0xF0, D_003837F8.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_179F90(a0 + 0x118, (int)D_001F7018, (D_00284D6C << 16) | 0xB800408D, D_003837F8.f34, D_003837F8.f38);
    *(char **)(a0 + 0x144) = s2;
    func_170630(a0 + 0x70);
}
