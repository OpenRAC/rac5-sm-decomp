/* LEVEL_04:0x07C7E0 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_0020F5D8;
extern Entry D_00254CC0[];

void func_07C7E0(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_0020F5D8;

    if (n < 16) {
        D_0020F5D8 = n + 1;
        D_00254CC0[n].first = first;
        D_00254CC0[n].kind = kind;
        D_00254CC0[n].second = second;
        D_00254CC0[n].zero_a = 0;
        D_00254CC0[n].third = third;
        D_00254CC0[n].zero_b = 0;
    }
}
