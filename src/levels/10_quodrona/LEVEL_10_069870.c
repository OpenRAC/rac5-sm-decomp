/* LEVEL_10:0x069870 -- placement copy of LEVEL_01_06AA40.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_0686B0(char *rec, int a);
extern void func_039948(char *rec, char *p);
extern void func_03A4E8(char *rec);
extern void func_003668(char *p, int a, int b, float f);
extern void func_003720(int a, float f, int b);
extern void func_003748(int a, float f, int b);
extern void func_003778(int a, float f, int b);
extern void func_0037A0(int a, float f, int b);
extern void func_000E18(int a, char *p, int b);
extern void func_0014F0(int a, char *p, int b, char *c, char *d, float f);
extern void func_038A50(char *rec, int a);
extern char D_00002DB8[];

void func_069870(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_0686B0(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_039948(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_03A4E8(o);
    func_003668(o + 0xDF8, 1000, 3, one);
    func_003720(0, one, 2);
    func_003748(0, one, 2);
    func_003778(0, one, 2);
    func_0037A0(0, one, 2);
    if (flag) {
        func_000E18(0, D_00002DB8, 0);
    } else {
        func_0014F0(0, D_00002DB8, 0, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_038A50(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
