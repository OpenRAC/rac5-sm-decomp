/* LEVEL_07:0x06B748 -- placement copy of LEVEL_01_06AA40.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_06A588(char *rec, int a);
extern void func_03B740(char *rec, char *p);
extern void func_03C3B0(char *rec);
extern void func_0038B8(char *p, int a, int b, float f);
extern void func_003970(int a, float f, int b);
extern void func_003998(int a, float f, int b);
extern void func_0039C8(int a, float f, int b);
extern void func_0039F0(int a, float f, int b);
extern void func_001088(int a, char *p, int b);
extern void func_001740(int a, char *p, int b, char *c, char *d, float f);
extern void func_03A570(char *rec, int a);
extern char D_00003008[];

void func_06B748(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_06A588(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_03B740(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_03C3B0(o);
    func_0038B8(o + 0xDF8, 1000, 3, one);
    func_003970(0, one, 2);
    func_003998(0, one, 2);
    func_0039C8(0, one, 2);
    func_0039F0(0, one, 2);
    if (flag) {
        func_001088(0, D_00003008, 0);
    } else {
        func_001740(0, D_00003008, 0, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_03A570(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
