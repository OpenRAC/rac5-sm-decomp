/* LEVEL_09:0x0765E0 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001DFF18;
extern Entry D_00221C30[];

void func_0765E0(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001DFF18;

    if (n < 16) {
        D_001DFF18 = n + 1;
        D_00221C30[n].first = first;
        D_00221C30[n].kind = kind;
        D_00221C30[n].second = second;
        D_00221C30[n].zero_a = 0;
        D_00221C30[n].third = third;
        D_00221C30[n].zero_b = 0;
    }
}
