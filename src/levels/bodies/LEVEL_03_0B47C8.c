/* LEVEL_03:0x0B47C8 -- placement copy of LEVEL_01_0B49E0.c: draws the fading gauge segments for a slot. */
typedef struct Ent { unsigned int a; float h; int z; } Ent;
typedef struct G { int first; Ent arr[8]; } G;
extern G D_00343320;
extern unsigned int D_002149DC;
extern void func_0A8C00(int, int);
extern void func_0AC230(int, int, int, int, unsigned int);
void func_0B47C8(void *value)
{
    unsigned int a, c1, c2;
    int y;
    int idx = (int)value;
    if (D_00343320.arr[idx].a) {
        func_0A8C00(idx, 0);
        a = D_00343320.arr[idx].a << 24;
        y = (int)(225.0f - D_00343320.arr[idx].h * 175.0f);
        D_002149DC = (D_002149DC & 0xFFFFFF) | a;
        c1 = a | 0x226644;
        c2 = a | 0x4422;
        func_0AC230(0x1C3, 0x2F, 0x1D8, 0xE4, c1);
        func_0AC230(0x1C6, 0x32, 0x1D5, 0xE1, c2);
        func_0AC230(0x1C6, (short)y, 0x1D5, 0xE1, D_002149DC);
    }
}
