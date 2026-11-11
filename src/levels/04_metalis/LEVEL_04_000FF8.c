/* LEVEL_04:0x000FF8 -- returns the shared slot at +0x10C. */
typedef struct {
    char pad_00[0x10C];
    float f_10C;
} G;

extern G *D_002083C8;

float func_000FF8(void)
{
    return D_002083C8->f_10C;
}
