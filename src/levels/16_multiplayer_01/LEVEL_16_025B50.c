/* LEVEL_16:0x025B50 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_001A1B00[];
extern int func_026668(void);

Ent *func_025B50(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_026668() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_001A1B00[i + 1].limit) {
            return &D_001A1B00[i];
        }
    }
    return &D_001A1B00[n];
}
