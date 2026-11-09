/* LEVEL_16:0x0A38A8 -- placement copy of LEVEL_01_0B49E0.c: draws the fading gauge segments for a slot. */
typedef struct Ent { unsigned int a; float h; int z; } Ent;
typedef struct G { int first; Ent arr[8]; } G;
extern G D_002763E0;
extern unsigned int D_001AA3DC;
extern void func_097540(int, int);
extern void func_09ABA0(int, int, int, int, unsigned int);
void func_0A38A8(void *value)
{
    unsigned int a, c1, c2;
    int y;
    int idx = (int)value;
    if (D_002763E0.arr[idx].a) {
        func_097540(idx, 0);
        a = D_002763E0.arr[idx].a << 24;
        y = (int)(225.0f - D_002763E0.arr[idx].h * 175.0f);
        D_001AA3DC = (D_001AA3DC & 0xFFFFFF) | a;
        c1 = a | 0x226644;
        c2 = a | 0x4422;
        func_09ABA0(0x1C3, 0x2F, 0x1D8, 0xE4, c1);
        func_09ABA0(0x1C6, 0x32, 0x1D5, 0xE1, c2);
        func_09ABA0(0x1C6, (short)y, 0x1D5, 0xE1, D_001AA3DC);
    }
}
