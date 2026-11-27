/* LEVEL_10:0x02E310 -- placement copy of LEVEL_01_02E488.c: finds the top set bit of two masks and fills a table header (value, shift, mask, power, sizes) before the setup call. */
typedef struct Tbl {
    void *value;
    unsigned int shift;
    int mask;
    int power;
    int pad10[2];
    int other;
    unsigned int shift2;
    int extra;
} Tbl;
extern void func_02E3B8(void *table);

void func_02E310(Tbl *t, void *value, unsigned int first, int other, unsigned int second, int extra)
{
    unsigned int shift1;
    unsigned int ok;
    int power;

    shift1 = 0x1f;
    ok = (first >> 0x1f) ^ 1;
    if (ok) {
        do {
            shift1--;
        } while (shift1 != 0 && (((first >> shift1) ^ 1) & 1));
    }
    first = 0x1f;
    ok = (second >> 0x1f) ^ 1;
    if (ok) {
        do {
            first--;
        } while (first != 0 && (((second >> first) ^ 1) & 1));
    }
    t->value = value;
    power = 1 << shift1;
    t->mask = power - 1;
    t->power = power;
    t->other = other;
    t->shift2 = first;
    t->extra = extra;
    t->shift = shift1;
    func_02E3B8(t);
}
