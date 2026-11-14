/* LEVEL_19:0x118CB0 -- placement copy of LEVEL_16_118308.c: per-frame step of the fade level: the hold counter counts down, the level falls by 8 once the counter has run out and otherwise rises by 3 (clamped to 0..255), then the follow-up is queued on the global table. */
typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

extern int D_001B9650;
extern int D_001B9654;
extern Table D_0026BB38;

extern void func_118BF0(void);
extern int func_10EDF0(Table *table, int key, int value);

void func_118CB0(void)
{
    int max;

    if (D_001B9650 != 0) {
        D_001B9650 = D_001B9650 - 1;
    }
    D_001B9654 = (D_001B9650 == 0) ? D_001B9654 - 8 : D_001B9654 + 3;
    max = 0xFF;
    if (max < D_001B9654) {
        D_001B9654 = max;
    }
    if (D_001B9654 < 0) {
        D_001B9654 = 0;
    }
    func_10EDF0(&D_0026BB38, (int)func_118BF0, 0);
}
