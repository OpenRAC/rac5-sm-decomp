/* LEVEL_04:0x06C4A8 -- placement copy of LEVEL_01_06AA40.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_06B2E8(char *rec, int a);
extern void func_03CCA0(char *rec, char *p);
extern void func_03D800(char *rec);
extern void func_0036C0(char *p, int a, int b, float f);
extern void func_003778(int a, float f, int b);
extern void func_0037A0(int a, float f, int b);
extern void func_0037D0(int a, float f, int b);
extern void func_0037F8(int a, float f, int b);
extern void func_000E90(int a, char *p, int b);
extern void func_001548(int a, char *p, int b, char *c, char *d, float f);
extern void func_03B688(char *rec, int a);
extern char D_00002E10[];

void func_06C4A8(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_06B2E8(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_03CCA0(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_03D800(o);
    func_0036C0(o + 0xDF8, 1000, 3, one);
    func_003778(0, one, 2);
    func_0037A0(0, one, 2);
    func_0037D0(0, one, 2);
    func_0037F8(0, one, 2);
    if (flag) {
        func_000E90(0, D_00002E10, 0);
    } else {
        func_001548(0, D_00002E10, 0, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_03B688(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
