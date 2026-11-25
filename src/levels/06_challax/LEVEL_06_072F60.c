/* LEVEL_06:0x072F60 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001E5018;
extern Entry D_00227230[];

void func_072F60(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001E5018;

    if (n < 16) {
        D_001E5018 = n + 1;
        D_00227230[n].first = first;
        D_00227230[n].kind = kind;
        D_00227230[n].second = second;
        D_00227230[n].zero_a = 0;
        D_00227230[n].third = third;
        D_00227230[n].zero_b = 0;
    }
}
