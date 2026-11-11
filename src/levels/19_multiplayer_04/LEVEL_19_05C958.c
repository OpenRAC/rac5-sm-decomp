/* LEVEL_19:0x05C958 -- placement copy of LEVEL_16_05D4F8.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_05B6E8(char *rec, int a);
extern void func_036640(char *rec, char *p);
extern void func_037058(char *rec);
extern void func_0034B0(char *p, int a, int b, float f);
extern void func_003568(int a, float f, int b);
extern void func_003590(int a, float f, int b);
extern void func_0035C0(int a, float f, int b);
extern void func_0035E8(int a, float f, int b);
extern void func_000CF0(int a, char *p, int b);
extern void func_001338(int a, char *p, int b, char *c, char *d, float f);
extern void func_035740(char *rec, int a);
extern char D_00002C00[];

void func_05C958(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_05B6E8(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_036640(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_037058(o);
    func_0034B0(o + 0xDF8, 1000, 3, one);
    func_003568(0, one, 2);
    func_003590(0, one, 2);
    func_0035C0(0, one, 2);
    func_0035E8(0, one, 2);
    if (flag) {
        func_000CF0(0, D_00002C00, *(int *)(o + 0xF4) - 1);
    } else {
        func_001338(0, D_00002C00, *(int *)(o + 0xF4) - 1, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_035740(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
