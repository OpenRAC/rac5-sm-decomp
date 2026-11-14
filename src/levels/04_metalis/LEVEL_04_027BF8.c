/* LEVEL_04:0x027BF8 -- placement copy of LEVEL_01_027F68.c: returns the first entry of the 12-byte table whose successor's limit exceeds the value, or the last entry. */
typedef struct {
    int w0;
    unsigned int limit;
    int w8;
} Ent;

extern Ent D_0020D150[];
extern int func_028680(void);

Ent *func_027BF8(unsigned int value)
{
    unsigned int n;
    unsigned int i;

    n = func_028680() - 1;
    for (i = 0; i < n; i++) {
        if (value < D_0020D150[i + 1].limit) {
            return &D_0020D150[i];
        }
    }
    return &D_0020D150[n];
}
