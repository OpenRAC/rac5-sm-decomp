/* LEVEL_16:0x13F7F0 -- picks the index whose random-weighted score is highest. */
extern int rand(void);
extern float D_001D32A8[];

int func_13F7F0(int *list, int count)
{
    int best = 0;
    int i;
    float bestScore = -1.0f;
    for (i = 0; i < (unsigned int)count; i++) {
        float score = (float)rand() * 4.6566123e-10f * D_001D32A8[list[i]];
        if (bestScore < score) {
            bestScore = score;
            best = list[i];
        }
    }
    return best;
}
