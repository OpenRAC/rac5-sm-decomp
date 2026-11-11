/* LEVEL_02:0x1944F0 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_003AEAD0;
extern unsigned int D_002AF4EC;
extern char D_0021D1D0[];
extern void func_19E300(char *record, int other, int value);
extern void func_19CCF8(char *a0, int a1, int a2, int a3, int a4);
extern void func_193398(char *);

void func_1944F0(char *a0)
{
    char *s2;

    func_19E300(a0 + 0xF0, D_003AEAD0.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_19CCF8(a0 + 0x118, (int)D_0021D1D0, (D_002AF4EC << 16) | 0xB800408D, D_003AEAD0.f34, D_003AEAD0.f38);
    *(char **)(a0 + 0x144) = s2;
    func_193398(a0 + 0x70);
}
