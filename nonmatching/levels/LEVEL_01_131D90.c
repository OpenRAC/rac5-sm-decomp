/* USA LEVEL_01.REL:0x131D90, 236-byte candidate (21 November 2026).
 * Measured pinned: 25 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    int w0;
    unsigned int flags;
    int w8;
    unsigned int wC;
    int tab[1];
} Hdr;

typedef struct {
    Hdr *hdr;
    unsigned int count;
    int w8;
} Desc;

extern int func_131988(Hdr *h);
extern int func_131B70(Desc *d);

Hdr *func_131D90(Desc *d, Hdr *h)
{
    unsigned int n;
    unsigned int i;
    unsigned int odd;
    int *p;
    unsigned int *fl;
    Hdr *r;

    r = h;
    memset(d, 0, 0xC);
    if (func_131988(r) == 0) {
        return 0;
    }
    fl = &r->flags;
    d->hdr = r;
    n = r->wC;
    d->count = n;
    odd = r->flags & 1;
    if ((r->flags & 4) != 0) {
        r->flags |= 2;
        return 0;
    }
    d->w8 = 0;
    p = &r->tab[0];
    if (odd) {
        p = &r->tab[1];
    }
    if (func_131B70(d) != 0) {
        return r;
    }
    for (i = 0; i < n; i++) {
        *p = (int)r + *p;
        p += 2;
    }
    *fl |= 2;
    return 0;
}
