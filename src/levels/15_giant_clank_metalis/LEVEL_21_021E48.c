/* LEVEL_21:0x021E48 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_00148C50[];
extern int func_022790(void);

Ent *func_021E48(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_022790() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_00148C50[i + 1].limit) {
            return &D_00148C50[i];
        }
    }
    return &D_00148C50[n];
}
