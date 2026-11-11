/* LEVEL_16:0x123AE0 -- resets the two alternating slots of the game block, bumps the statistic that matches the current mode, and clears two status globals. */
typedef struct Stats {
    char pad_00[8];
    int a;
    char pad_0C[0x20];
    int b;
    char pad_30[0x20];
    int c;
} Stats;

typedef struct Game {
    char pad_00[0x184];
    int mode;
    char pad_188[0x10];
    unsigned int slots[2];
} Game;

extern Game *D_001E00A8[1];
extern unsigned char D_001AAB04;
extern int D_001BC9C0;
extern int func_117678(void);

void func_123AE0(void)
{
    Stats *stats = (Stats *)func_117678();
    unsigned int count = 2;
    unsigned int i;

    for (i = 0; i < count; i++)
        D_001E00A8[0]->slots[i] = i % count;
    switch (D_001E00A8[0]->mode) {
    case 0:
        stats->a = stats->a + 1;
        break;
    case 1:
        stats->b = stats->b + 1;
        break;
    case 2:
        stats->c = stats->c + 1;
        break;
    }
    D_001AAB04 = 0;
    D_001BC9C0 = 0;
}
