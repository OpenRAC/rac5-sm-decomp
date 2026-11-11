/* LEVEL_20:0x056B20 -- placement copy of LEVEL_16_05D4F8.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_0558B0(char *rec, int a);
extern void func_031690(char *rec, char *p);
extern void func_032060(char *rec);
extern void func_003470(char *p, int a, int b, float f);
extern void func_003528(int a, float f, int b);
extern void func_003550(int a, float f, int b);
extern void func_003580(int a, float f, int b);
extern void func_0035A8(int a, float f, int b);
extern void func_000CB0(int a, char *p, int b);
extern void func_0012F8(int a, char *p, int b, char *c, char *d, float f);
extern void func_030798(char *rec, int a);
extern char D_00002BC0[];

void func_056B20(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_0558B0(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_031690(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_032060(o);
    func_003470(o + 0xDF8, 1000, 3, one);
    func_003528(0, one, 2);
    func_003550(0, one, 2);
    func_003580(0, one, 2);
    func_0035A8(0, one, 2);
    if (flag) {
        func_000CB0(0, D_00002BC0, *(int *)(o + 0xF4) - 1);
    } else {
        func_0012F8(0, D_00002BC0, *(int *)(o + 0xF4) - 1, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_030798(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
