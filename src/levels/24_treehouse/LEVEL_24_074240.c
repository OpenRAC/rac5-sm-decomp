/* LEVEL_24:0x074240 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001C6D98;
extern Entry D_002063B0[];

void func_074240(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001C6D98;

    if (n < 16) {
        D_001C6D98 = n + 1;
        D_002063B0[n].first = first;
        D_002063B0[n].kind = kind;
        D_002063B0[n].second = second;
        D_002063B0[n].zero_a = 0;
        D_002063B0[n].third = third;
        D_002063B0[n].zero_b = 0;
    }
}
