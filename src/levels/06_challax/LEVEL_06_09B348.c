/* LEVEL_06.REL:09B348 -- stores the two floats in D_001E5610 and raises the
   byte at D_001E5620. */
typedef struct {
    char pad_00[0x8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_001E5610;
extern unsigned char D_001E5620;

void func_09B348(float a, float b)
{
    D_001E5620 = 1;
    D_001E5610.f_08 = a;
    D_001E5610.f_0C = b;
}
