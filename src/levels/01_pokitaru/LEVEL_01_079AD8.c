/* LEVEL_01:0x079AD8 -- appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001F6118;
extern Entry D_0023A4B0[];

void func_079AD8(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001F6118;

    if (n < 16) {
        D_001F6118 = n + 1;
        D_0023A4B0[n].first = first;
        D_0023A4B0[n].kind = kind;
        D_0023A4B0[n].second = second;
        D_0023A4B0[n].zero_a = 0;
        D_0023A4B0[n].third = third;
        D_0023A4B0[n].zero_b = 0;
    }
}
