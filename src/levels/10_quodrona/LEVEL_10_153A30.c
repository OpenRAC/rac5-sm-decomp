/* LEVEL_10:0x153A30 -- stores the square of the first angle and the second
   angle into the two neighbouring shared slots. */
typedef struct {
    char pad_00[0x48C];
    float f_48C;
    float f_490;
} G;

extern G D_0039AF98;

void func_153A30(float a, float b)
{
    D_0039AF98.f_48C = a * a;
    D_0039AF98.f_490 = b;
}
