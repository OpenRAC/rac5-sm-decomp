/* LEVEL_17:0x06B108 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_00197168;
extern Entry D_001DDE80[];

void func_06B108(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_00197168;

    if (n < 16) {
        D_00197168 = n + 1;
        D_001DDE80[n].first = first;
        D_001DDE80[n].kind = kind;
        D_001DDE80[n].second = second;
        D_001DDE80[n].zero_a = 0;
        D_001DDE80[n].third = third;
        D_001DDE80[n].zero_b = 0;
    }
}
