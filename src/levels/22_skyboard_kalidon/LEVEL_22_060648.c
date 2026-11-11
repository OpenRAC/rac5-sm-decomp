/* LEVEL_22:0x060648 -- placement copy of LEVEL_01_06AA40.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_05F488(char *rec, int a);
extern void func_030E60(char *rec, char *p);
extern void func_0319C0(char *rec);
extern void func_003638(char *p, int a, int b, float f);
extern void func_0036F0(int a, float f, int b);
extern void func_003718(int a, float f, int b);
extern void func_003748(int a, float f, int b);
extern void func_003770(int a, float f, int b);
extern void func_000E68(int a, char *p, int b);
extern void func_0014B0(int a, char *p, int b, char *c, char *d, float f);
extern void func_02FF90(char *rec, int a);
extern char D_00002D78[];

void func_060648(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_05F488(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_030E60(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_0319C0(o);
    func_003638(o + 0xDF8, 1000, 3, one);
    func_0036F0(0, one, 2);
    func_003718(0, one, 2);
    func_003748(0, one, 2);
    func_003770(0, one, 2);
    if (flag) {
        func_000E68(0, D_00002D78, 0);
    } else {
        func_0014B0(0, D_00002D78, 0, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_02FF90(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
