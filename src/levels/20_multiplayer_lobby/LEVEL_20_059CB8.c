/* LEVEL_20:0x059CB8 -- placement copy of LEVEL_01_079AD8.c: appends a record to a 16-entry table while there is room. */
typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_00106248;
extern Entry D_001443E8[];

void func_059CB8(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_00106248;

    if (n < 16) {
        D_00106248 = n + 1;
        D_001443E8[n].first = first;
        D_001443E8[n].kind = kind;
        D_001443E8[n].second = second;
        D_001443E8[n].zero_a = 0;
        D_001443E8[n].third = third;
        D_001443E8[n].zero_b = 0;
    }
}
