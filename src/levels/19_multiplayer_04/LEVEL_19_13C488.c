/* LEVEL_19:0x13C488 -- placement copy of LEVEL_16_13F7F0.c: picks the index whose random-weighted score is highest. */
extern int rand(void);
extern float D_001D3C10[];

int func_13C488(int *list, int count)
{
    int best = 0;
    int i;
    float bestScore = -1.0f;
    for (i = 0; i < (unsigned int)count; i++) {
        float score = (float)rand() * 4.6566123e-10f * D_001D3C10[list[i]];
        if (bestScore < score) {
            bestScore = score;
            best = list[i];
        }
    }
    return best;
}
