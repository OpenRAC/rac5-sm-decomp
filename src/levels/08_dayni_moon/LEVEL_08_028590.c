/* LEVEL_08:0x028590 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_0023CB50[];
extern int func_029150(void);

Ent *func_028590(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_029150() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_0023CB50[i + 1].limit) {
            return &D_0023CB50[i];
        }
    }
    return &D_0023CB50[n];
}
