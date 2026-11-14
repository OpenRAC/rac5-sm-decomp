/* LEVEL_18:0x025100 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_001A2F80[];
extern int func_025C18(void);

Ent *func_025100(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_025C18() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_001A2F80[i + 1].limit) {
            return &D_001A2F80[i];
        }
    }
    return &D_001A2F80[n];
}
