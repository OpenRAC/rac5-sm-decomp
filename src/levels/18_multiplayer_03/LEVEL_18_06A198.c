/* LEVEL_18:0x06A198 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001A4FE8;
extern Entry D_001ECF00[];

void func_06A198(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001A4FE8;

    if (n < 16) {
        D_001A4FE8 = n + 1;
        D_001ECF00[n].first = first;
        D_001ECF00[n].kind = kind;
        D_001ECF00[n].second = second;
        D_001ECF00[n].zero_a = 0;
        D_001ECF00[n].third = third;
        D_001ECF00[n].zero_b = 0;
    }
}
