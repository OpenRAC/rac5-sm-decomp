/* LEVEL_18:0x117330 -- placement copy of LEVEL_16_118308.c: per-frame step of the fade level: the hold counter counts down, the level falls by 8 once the counter has run out and otherwise rises by 3 (clamped to 0..255), then the follow-up is queued on the global table. */
typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

extern int D_001B9958;
extern int D_001B995C;
extern Table D_0026BD38;

extern void func_117270(void);
extern int func_10D400(Table *table, int key, int value);

void func_117330(void)
{
    int max;

    if (D_001B9958 != 0) {
        D_001B9958 = D_001B9958 - 1;
    }
    D_001B995C = (D_001B9958 == 0) ? D_001B995C - 8 : D_001B995C + 3;
    max = 0xFF;
    if (max < D_001B995C) {
        D_001B995C = max;
    }
    if (D_001B995C < 0) {
        D_001B995C = 0;
    }
    func_10D400(&D_0026BD38, (int)func_117270, 0);
}
