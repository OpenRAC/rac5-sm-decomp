/* LEVEL_15:0x05BB78 -- placement copy of LEVEL_01_06AA40.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_05A9B8(char *rec, int a);
extern void func_02EC40(char *rec, char *p);
extern void func_02F6D8(char *rec);
extern void func_003410(char *p, int a, int b, float f);
extern void func_0034C8(int a, float f, int b);
extern void func_0034F0(int a, float f, int b);
extern void func_003520(int a, float f, int b);
extern void func_003548(int a, float f, int b);
extern void func_000BE0(int a, char *p, int b);
extern void func_001298(int a, char *p, int b, char *c, char *d, float f);
extern void func_02E908(char *rec, int a);
extern char D_00002B60[];

void func_05BB78(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_05A9B8(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_02EC40(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_02F6D8(o);
    func_003410(o + 0xDF8, 1000, 3, one);
    func_0034C8(0, one, 2);
    func_0034F0(0, one, 2);
    func_003520(0, one, 2);
    func_003548(0, one, 2);
    if (flag) {
        func_000BE0(0, D_00002B60, 0);
    } else {
        func_001298(0, D_00002B60, 0, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_02E908(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
