/* LEVEL_04:0x161550 -- placement copy of LEVEL_01_154E00.c: splits a byte size into per-class block counts and processes each block. */
typedef struct Ent {
    int f0;
    unsigned int f4;
    char pad8[0x2C - 8];
} Ent;
extern Ent D_00236E70[5];
extern unsigned int D_0024A080;
extern void *memset(void *p, int c, unsigned int n);
extern int func_027EF8(void);
extern void func_160998(int cls, int arg);

void func_161550(int arg, unsigned int size)
{
    unsigned int cnt[5];
    unsigned int *c;
    Ent *e;
    Ent *t;
    unsigned int u;
    unsigned int q;
    int k;
    unsigned int i;
    unsigned int n;
    unsigned int j;

    D_0024A080 += size;
    memset(cnt, 0, 0x14);
    size = (size + 3) >> 2 << 2;
    t = D_00236E70;
    e = t + 4;
    c = &cnt[4];
    k = 4;
    do {
        k--;
        if (func_027EF8() != 0)
            u = e->f4 << 2;
        else
            u = e->f4;
        q = size / u;
        e--;
        *c = q;
        c--;
        size -= u * q;
    } while (k != -1);
    i = 0;
    do {
        n = cnt[i];
        for (j = 0; j < n; j++)
            func_160998(i, arg);
        i = i + 1;
    } while (i < 5);
}
