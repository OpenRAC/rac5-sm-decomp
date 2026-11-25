/* LEVEL_22:0x06C498 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_00155498;
extern Entry D_0018C0B0[];

void func_06C498(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_00155498;

    if (n < 16) {
        D_00155498 = n + 1;
        D_0018C0B0[n].first = first;
        D_0018C0B0[n].kind = kind;
        D_0018C0B0[n].second = second;
        D_0018C0B0[n].zero_a = 0;
        D_0018C0B0[n].third = third;
        D_0018C0B0[n].zero_b = 0;
    }
}
