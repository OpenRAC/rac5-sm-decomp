/* LEVEL_10:0x003908 -- stores the angle into the shared slot at +0x154. */
typedef struct {
    char pad_00[0x154];
    float f_154;
} G;

extern G *D_001F8254;

void func_003908(float f)
{
    D_001F8254->f_154 = f;
}
