/* LEVEL_20:0x0EA820 -- placement copy of LEVEL_16_118308.c: per-frame step of the fade level: the hold counter counts down, the level falls by 8 once the counter has run out and otherwise rises by 3 (clamped to 0..255), then the follow-up is queued on the global table. */
typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

extern int D_0011AB78;
extern int D_0011AB7C;
extern Table D_0018F1F8;

extern void func_0EA760(void);
extern int func_0E1538(Table *table, int key, int value);

void func_0EA820(void)
{
    int max;

    if (D_0011AB78 != 0) {
        D_0011AB78 = D_0011AB78 - 1;
    }
    D_0011AB7C = (D_0011AB78 == 0) ? D_0011AB7C - 8 : D_0011AB7C + 3;
    max = 0xFF;
    if (max < D_0011AB7C) {
        D_0011AB7C = max;
    }
    if (D_0011AB7C < 0) {
        D_0011AB7C = 0;
    }
    func_0E1538(&D_0018F1F8, (int)func_0EA760, 0);
}
