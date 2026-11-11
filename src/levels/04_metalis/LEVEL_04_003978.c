/* LEVEL_04:0x003978 -- stores the angle into the shared slot at +0x154. */
typedef struct {
    char pad_00[0x154];
    float f_154;
} G;

extern G *D_002083D4;

void func_003978(float f)
{
    D_002083D4->f_154 = f;
}
