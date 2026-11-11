/* LEVEL_20:0x08DF88 -- placement copy of LEVEL_01_0B49E0.c: draws the fading gauge segments for a slot. */
typedef struct Ent { unsigned int a; float h; int z; } Ent;
typedef struct G { int first; Ent arr[8]; } G;
extern G D_00199C20;
extern unsigned int D_0010CABC;
extern void func_081C38(int, int);
extern void func_085298(int, int, int, int, unsigned int);
void func_08DF88(void *value)
{
    unsigned int a, c1, c2;
    int y;
    int idx = (int)value;
    if (D_00199C20.arr[idx].a) {
        func_081C38(idx, 0);
        a = D_00199C20.arr[idx].a << 24;
        y = (int)(225.0f - D_00199C20.arr[idx].h * 175.0f);
        D_0010CABC = (D_0010CABC & 0xFFFFFF) | a;
        c1 = a | 0x226644;
        c2 = a | 0x4422;
        func_085298(0x1C3, 0x2F, 0x1D8, 0xE4, c1);
        func_085298(0x1C6, 0x32, 0x1D5, 0xE1, c2);
        func_085298(0x1C6, (short)y, 0x1D5, 0xE1, D_0010CABC);
    }
}
