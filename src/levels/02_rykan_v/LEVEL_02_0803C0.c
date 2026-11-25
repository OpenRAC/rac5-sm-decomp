/* LEVEL_02:0x0803C0 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_0020B0D8;
extern Entry D_002519C0[];

void func_0803C0(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_0020B0D8;

    if (n < 16) {
        D_0020B0D8 = n + 1;
        D_002519C0[n].first = first;
        D_002519C0[n].kind = kind;
        D_002519C0[n].second = second;
        D_002519C0[n].zero_a = 0;
        D_002519C0[n].third = third;
        D_002519C0[n].zero_b = 0;
    }
}
