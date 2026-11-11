/* LEVEL_03:0x0693C8 -- placement copy of LEVEL_01_06AA40.c: resets a record's state, restarts its effects and sounds, picks one of two start requests and flags it as running. */

extern void func_068208(char *rec, int a);
extern void func_039450(char *rec, char *p);
extern void func_03A0C0(char *rec);
extern void func_0038F0(char *p, int a, int b, float f);
extern void func_0039A8(int a, float f, int b);
extern void func_0039D0(int a, float f, int b);
extern void func_003A00(int a, float f, int b);
extern void func_003A28(int a, float f, int b);
extern void func_001088(int a, char *p, int b);
extern void func_001768(int a, char *p, int b, char *c, char *d, float f);
extern void func_038280(char *rec, int a);
extern char D_00003030[];

void func_0693C8(char *o, int flag)
{
    float one;

    *(int *)(o + 0xF50) = 0;
    *(int *)(o + 0xF9C) = 0;
    *(int *)(o + 0xEF8) = 0;
    func_068208(o, 1);
    if (*(int *)(o + 0xE7C) != 1) {
        if (!(((unsigned char)(*(unsigned long long *)(o + 0xF10) >> 6)) & 1)) {
            func_039450(o, o + 0x60);
        }
    }
    one = 1.0f;
    func_03A0C0(o);
    func_0038F0(o + 0xDF8, 1000, 3, one);
    func_0039A8(0, one, 2);
    func_0039D0(0, one, 2);
    func_003A00(0, one, 2);
    func_003A28(0, one, 2);
    if (flag) {
        func_001088(0, D_00003030, 0);
    } else {
        func_001768(0, D_00003030, 0, o + 0xDD8, o + 0xE80, -0.0555555559694767f);
    }
    *(int *)(o + 0xE7C) = 5;
    func_038280(o, ((unsigned char)(*(unsigned long long *)(o + 0x968) >> 8)) & 1);
}
