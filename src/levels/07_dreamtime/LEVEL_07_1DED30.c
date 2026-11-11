/* LEVEL_07:0x1DED30 -- placement copy of LEVEL_03_1E2578.c: runs a counted helper over one table and a second counted helper over another table. */

struct R1E2578 {
    int f0;
    char *f4;
    int f8;
    char *fC;
    int f10;
};

extern void func_1DE960(char *a0);
extern void func_1DEB90(char *a0);

void func_1DED30(struct R1E2578 *a0)
{
    int i;
    int k;
    int n;
    int off;

    i = 0;
    n = a0->f8;
    if (n != 0) {
        do {
            func_1DE960(a0->f4 + ((i++) << 7));
        } while (i != n);
    }
    n = a0->f10;
    if (n != 0) {
        k = 0;
        off = 0;
        do {
            k++;
            func_1DEB90(a0->fC + off);
            off += 0x34;
        } while (k != n);
    }
}
