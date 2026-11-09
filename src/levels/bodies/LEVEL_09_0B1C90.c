/* LEVEL_09:0x0B1C90 -- placement copy of LEVEL_01_0B49E0.c: draws the fading gauge segments for a slot. */
typedef struct Ent { unsigned int a; float h; int z; } Ent;
typedef struct G { int first; Ent arr[8]; } G;
extern G D_0030FC20;
extern unsigned int D_001E615C;
extern void func_0A6130(int, int);
extern void func_0A9760(int, int, int, int, unsigned int);
void func_0B1C90(void *value)
{
    unsigned int a, c1, c2;
    int y;
    int idx = (int)value;
    if (D_0030FC20.arr[idx].a) {
        func_0A6130(idx, 0);
        a = D_0030FC20.arr[idx].a << 24;
        y = (int)(225.0f - D_0030FC20.arr[idx].h * 175.0f);
        D_001E615C = (D_001E615C & 0xFFFFFF) | a;
        c1 = a | 0x226644;
        c2 = a | 0x4422;
        func_0A9760(0x1C3, 0x2F, 0x1D8, 0xE4, c1);
        func_0A9760(0x1C6, 0x32, 0x1D5, 0xE1, c2);
        func_0A9760(0x1C6, (short)y, 0x1D5, 0xE1, D_001E615C);
    }
}
