/* LEVEL_01:0x027F68 -- returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_001F3FD0[];
extern int func_028BD8(void);

Ent *func_027F68(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_028BD8() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_001F3FD0[i + 1].limit) {
            return &D_001F3FD0[i];
        }
    }
    return &D_001F3FD0[n];
}
