/* LEVEL_17:0x117CB8 -- placement copy of LEVEL_16_118308.c: per-frame step of the fade level: the hold counter counts down, the level falls by 8 once the counter has run out and otherwise rises by 3 (clamped to 0..255), then the follow-up is queued on the global table. */
typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

extern int D_001ABAD0;
extern int D_001ABAD4;
extern Table D_0025CCB8;

extern void func_117BF8(void);
extern int func_10DCC8(Table *table, int key, int value);

void func_117CB8(void)
{
    int max;

    if (D_001ABAD0 != 0) {
        D_001ABAD0 = D_001ABAD0 - 1;
    }
    D_001ABAD4 = (D_001ABAD0 == 0) ? D_001ABAD4 - 8 : D_001ABAD4 + 3;
    max = 0xFF;
    if (max < D_001ABAD4) {
        D_001ABAD4 = max;
    }
    if (D_001ABAD4 < 0) {
        D_001ABAD4 = 0;
    }
    func_10DCC8(&D_0025CCB8, (int)func_117BF8, 0);
}
