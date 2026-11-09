/* LEVEL_07:0x0B6A40 -- placement copy of LEVEL_01_0B49E0.c: draws the fading gauge segments for a slot. */
typedef struct Ent { unsigned int a; float h; int z; } Ent;
typedef struct G { int first; Ent arr[8]; } G;
extern G D_0033DDA0;
extern unsigned int D_0021065C;
extern void func_0AAE80(int, int);
extern void func_0AE4B0(int, int, int, int, unsigned int);
void func_0B6A40(void *value)
{
    unsigned int a, c1, c2;
    int y;
    int idx = (int)value;
    if (D_0033DDA0.arr[idx].a) {
        func_0AAE80(idx, 0);
        a = D_0033DDA0.arr[idx].a << 24;
        y = (int)(225.0f - D_0033DDA0.arr[idx].h * 175.0f);
        D_0021065C = (D_0021065C & 0xFFFFFF) | a;
        c1 = a | 0x226644;
        c2 = a | 0x4422;
        func_0AE4B0(0x1C3, 0x2F, 0x1D8, 0xE4, c1);
        func_0AE4B0(0x1C6, 0x32, 0x1D5, 0xE1, c2);
        func_0AE4B0(0x1C6, (short)y, 0x1D5, 0xE1, D_0021065C);
    }
}
