/* LEVEL_18:0x05C000 -- placement copy of LEVEL_16_05D4F8.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_05AD90(char *rec, int a);
extern void func_035B80(char *rec, char *p);
extern void func_036608(char *rec);
extern void func_003520(char *p, int a, int b, float f);
extern void func_0035D8(int a, float f, int b);
extern void func_003600(int a, float f, int b);
extern void func_003630(int a, float f, int b);
extern void func_003658(int a, float f, int b);
extern void func_000CF0(int a, char *p, int b);
extern void func_0013A8(int a, char *p, int b, char *c, char *d, float f);
extern void func_034C80(char *rec, int a);
extern char D_00002C70[];

void func_05C000(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_05AD90(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_035B80(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_036608(o);
    func_003520(o + 0xDF8, 1000, 3, one);
    func_0035D8(0, one, 2);
    func_003600(0, one, 2);
    func_003630(0, one, 2);
    func_003658(0, one, 2);
    if (flag) {
        func_000CF0(0, D_00002C70, *(int *)(o + 0xF4) - 1);
    } else {
        func_0013A8(0, D_00002C70, *(int *)(o + 0xF4) - 1, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_034C80(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
