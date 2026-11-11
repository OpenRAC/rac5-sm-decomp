/* LEVEL_17:0x000FD0 -- returns the shared slot at +0xF8. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
} G;

extern G *D_0018E2CC;

float func_000FD0(void)
{
    return D_0018E2CC->f_F8;
}
