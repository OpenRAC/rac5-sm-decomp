/* LEVEL_01:0x17E560 -- initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_00396AC0;
extern unsigned int D_00297FEC;
extern char D_002081B8[];
extern void func_188370(char *record, int other, int value);
extern void func_186D68(char *a0, int a1, int a2, int a3, int a4);
extern void func_17D408(char *);

void func_17E560(char *a0)
{
    char *s2;

    func_188370(a0 + 0xF0, D_00396AC0.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_186D68(a0 + 0x118, (int)D_002081B8, (D_00297FEC << 16) | 0xB800408D, D_00396AC0.f34, D_00396AC0.f38);
    *(char **)(a0 + 0x144) = s2;
    func_17D408(a0 + 0x70);
}
