/* LEVEL_15:0x005CB8 -- placement copy of LEVEL_01_006160.c: eases the player's pitch rate and clamps it to a range. */
typedef struct Player {
    char pad0[0x40];
    unsigned long long flags;
    char pad48[0x6C];
    float fB4;
    char pad_B8[0xC4 - 0xB8];
    int fC4;
    char pad_C8[0x270 - 0xC8];
    float f270;
    char pad274[4];
    float f278;
    char pad27C[4];
    float f280;
    char pad284[0x358 - 0x284];
    float f358;
} Player;

extern Player *D_00143EBC[];
extern float fabsf(float x);
extern int func_007630(void);
extern float func_001F08(float a, float b, float c, float d, float e);

void func_005CB8(void)
{
    float sum;

    if (D_00143EBC[0]->fC4 != 2) {
        D_00143EBC[0]->f270 = 0.0f;
        return;
    }
    if (((unsigned char)(D_00143EBC[0]->flags >> 11) & 1) && 0.0f < D_00143EBC[0]->f278
        && (0.0f < D_00143EBC[0]->fB4 || func_007630())) {
        D_00143EBC[0]->f270 = 0.0f;
        return;
    }
    D_00143EBC[0]->f270 = func_001F08(D_00143EBC[0]->f270, D_00143EBC[0]->f278,
        0.009308423846960068f,
        D_00143EBC[0]->f280 * -2.356194496154785f * 0.03333333507180214f,
        D_00143EBC[0]->f280 * 2.356194496154785f * 0.03333333507180214f);
    sum = D_00143EBC[0]->fB4 + D_00143EBC[0]->f270;
    if (sum < -0.8726646304130554f) {
        D_00143EBC[0]->f270 = (D_00143EBC[0]->f270 + fabsf(D_00143EBC[0]->f270)) * 0.5f;
    } else if (1.3089970350265503f < sum) {
        D_00143EBC[0]->f270 = (D_00143EBC[0]->f270 - fabsf(D_00143EBC[0]->f270)) * 0.5f;
    }
    D_00143EBC[0]->fB4 += D_00143EBC[0]->f270;
    D_00143EBC[0]->f358 += D_00143EBC[0]->f270;
}
