/* LEVEL_06:0x026518 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_001E2ED0[];
extern int func_026FC0(void);

Ent *func_026518(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_026FC0() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_001E2ED0[i + 1].limit) {
            return &D_001E2ED0[i];
        }
    }
    return &D_001E2ED0[n];
}
