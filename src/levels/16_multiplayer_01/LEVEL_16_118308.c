/* LEVEL_16:0x118308 -- per-frame step of the fade level: the hold counter counts down, the level falls by 8 once the counter has run out and otherwise rises by 3 (clamped to 0..255), then the follow-up is queued on the global table. */
typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

extern int D_001B84D8;
extern int D_001B84DC;
extern Table D_0026B9B8;

extern void func_118248(void);
extern int func_10E750(Table *table, int key, int value);

void func_118308(void)
{
    int max;

    if (D_001B84D8 != 0) {
        D_001B84D8 = D_001B84D8 - 1;
    }
    D_001B84DC = (D_001B84D8 == 0) ? D_001B84DC - 8 : D_001B84DC + 3;
    max = 0xFF;
    if (max < D_001B84DC) {
        D_001B84DC = max;
    }
    if (D_001B84DC < 0) {
        D_001B84DC = 0;
    }
    func_10E750(&D_0026B9B8, (int)func_118248, 0);
}
