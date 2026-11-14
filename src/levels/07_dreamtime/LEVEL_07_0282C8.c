/* LEVEL_07:0x0282C8 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_002082D0[];
extern int func_028F18(void);

Ent *func_0282C8(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_028F18() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_002082D0[i + 1].limit) {
            return &D_002082D0[i];
        }
    }
    return &D_002082D0[n];
}
