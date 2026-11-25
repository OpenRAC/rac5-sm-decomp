/* LEVEL_07:0x07BCC8 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_0020A418;
extern Entry D_0024FDB0[];

void func_07BCC8(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_0020A418;

    if (n < 16) {
        D_0020A418 = n + 1;
        D_0024FDB0[n].first = first;
        D_0024FDB0[n].kind = kind;
        D_0024FDB0[n].second = second;
        D_0024FDB0[n].zero_a = 0;
        D_0024FDB0[n].third = third;
        D_0024FDB0[n].zero_b = 0;
    }
}
