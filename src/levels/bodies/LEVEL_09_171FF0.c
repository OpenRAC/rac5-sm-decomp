/* LEVEL_09:0x171FF0 -- placement copy of LEVEL_01_17E560.c: initializes two linked records from a shared config block and registers a handler. */

struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_0037E158;
extern unsigned int D_0027F76C;
extern char D_001F1F08[];
extern void func_17BE00(char *record, int other, int value);
extern void func_17A7F8(char *a0, int a1, int a2, int a3, int a4);
extern void func_170E98(char *);

void func_171FF0(char *a0)
{
    char *s2;

    func_17BE00(a0 + 0xF0, D_0037E158.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_17A7F8(a0 + 0x118, (int)D_001F1F08, (D_0027F76C << 16) | 0xB800408D, D_0037E158.f34, D_0037E158.f38);
    *(char **)(a0 + 0x144) = s2;
    func_170E98(a0 + 0x70);
}
