/* LEVEL_24.REL:09A3F0 -- stores the two floats in D_001C7390 and raises the
   byte at D_001C73A0. */
typedef struct {
    char pad_00[0x8];
    float f_08;
    float f_0C;
    unsigned char f_10;
} Rec;

extern Rec D_001C7390;
extern unsigned char D_001C73A0;

void func_09A3F0(float a, float b)
{
    D_001C73A0 = 1;
    D_001C7390.f_08 = a;
    D_001C7390.f_0C = b;
}
