/* LEVEL_16:0x06AA60 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001A3B68;
extern Entry D_001ECB80[];

void func_06AA60(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001A3B68;

    if (n < 16) {
        D_001A3B68 = n + 1;
        D_001ECB80[n].first = first;
        D_001ECB80[n].kind = kind;
        D_001ECB80[n].second = second;
        D_001ECB80[n].zero_a = 0;
        D_001ECB80[n].third = third;
        D_001ECB80[n].zero_b = 0;
    }
}
