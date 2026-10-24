/* LEVEL_09.REL:0x09DD50 -- arms the shared pair and raises its flag. */
typedef struct { float f_00; float f_04; } Pair;
extern Pair D_001E0510;
extern unsigned char D_001E0520;
void func_09DD50(float a, float b)
{
    D_001E0520 = 1;
    D_001E0510.f_00 = a;
    D_001E0510.f_04 = b;
}
