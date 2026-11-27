/* LEVEL_06:0x025E88 -- placement copy of LEVEL_05_026718.c: claims slot idx of an eight-entry owner table for val, clearing any earlier claim of that value. */
typedef struct Tbl {
    char pad000[0x864];
    int owner[8];
    int state[8];
} Tbl;
extern Tbl *D_001E2EAC[1];

int func_025E88(unsigned int idx, int val)
{
    unsigned int i;

    if (idx >= 8)
        return 0;
    if (D_001E2EAC[0]->owner[idx] == val)
        return 0;
    for (i = 0; i < 8; i++) {
        if (D_001E2EAC[0]->owner[i] == val) {
            D_001E2EAC[0]->state[i] = 0;
            D_001E2EAC[0]->owner[i] = 0;
        }
    }
    D_001E2EAC[0]->state[idx] = 0;
    D_001E2EAC[0]->owner[idx] = val;
    return 1;
}
