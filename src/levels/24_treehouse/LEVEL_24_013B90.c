/* LEVEL_24:0x013B90 -- placement copy of LEVEL_01_014918.c: converts leading offsets to pointers while the target record has a nonzero field; returns the number converted. */
extern int D_001D7A14;

unsigned int func_013B90(int *p, unsigned int n)
{
    unsigned int i;
    int v;
    int ok;
    char *t;

    i = 0;
    if (n != 0) {
        do {
            v = p[0];
            if (v == 0) {
                ok = 0;
            } else {
                t = (char *)(D_001D7A14 + v);
                if (*(int *)(t + 0x40) == 0) {
                    p[0] = 0;
                    ok = 0;
                } else {
                    p[0] = (int)t;
                    ok = 1;
                }
            }
            if (!ok) {
                break;
            }
            i++;
            p++;
        } while (i < n);
    }
    return i;
}
