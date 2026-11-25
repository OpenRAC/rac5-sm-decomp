/* LEVEL_19:0x06AB38 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_001A4CE8;
extern Entry D_001ECD00[];

void func_06AB38(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_001A4CE8;

    if (n < 16) {
        D_001A4CE8 = n + 1;
        D_001ECD00[n].first = first;
        D_001ECD00[n].kind = kind;
        D_001ECD00[n].second = second;
        D_001ECD00[n].zero_a = 0;
        D_001ECD00[n].third = third;
        D_001ECD00[n].zero_b = 0;
    }
}
