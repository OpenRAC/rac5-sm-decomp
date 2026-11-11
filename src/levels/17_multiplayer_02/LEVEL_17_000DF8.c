/* LEVEL_17:0x000DF8 -- returns the shared slot at +0x110. */
typedef struct {
    char pad_00[0x110];
    float f_110;
} G;

extern G *D_0018E2CC;

float func_000DF8(void)
{
    return D_0018E2CC->f_110;
}
