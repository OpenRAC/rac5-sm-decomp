/* LEVEL_17:0x0254D0 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_00195100[];
extern int func_025FE8(void);

Ent *func_0254D0(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_025FE8() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_00195100[i + 1].limit) {
            return &D_00195100[i];
        }
    }
    return &D_00195100[n];
}
