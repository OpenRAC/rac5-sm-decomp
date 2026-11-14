/* LEVEL_03:0x027E48 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_0020C650[];
extern int func_0289D0(void);

Ent *func_027E48(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_0289D0() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_0020C650[i + 1].limit) {
            return &D_0020C650[i];
        }
    }
    return &D_0020C650[n];
}
