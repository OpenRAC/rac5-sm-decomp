/* LEVEL_20:0x022670 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_001041E0[];
extern int func_023170(void);

Ent *func_022670(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_023170() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_001041E0[i + 1].limit) {
            return &D_001041E0[i];
        }
    }
    return &D_001041E0[n];
}
