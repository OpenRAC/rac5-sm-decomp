/* LEVEL_22:0x11A580 -- folds an index into a mirrored range described by two limits. */
struct Lim {
    unsigned char pad0;
    unsigned char n;
    unsigned char m;
};
struct Own {
    char pad[0x54];
    struct Lim *lim;
};

unsigned char func_11A580(struct Own *o, unsigned char x)
{
    struct Lim *p = o->lim;
    unsigned char n = p->n;
    unsigned char d = (n + 1) * 2;
    unsigned char q = x / d;
    unsigned char r = (x % d) >> 1;
    unsigned char t;

    if (q & 1)
        r = n - r;
    t = q + (x & 1);
    if (r != 0 && r < n && t != 0 && t < p->m)
        return 0xFF;
    if (t == 0)
        return r;
    if (r == p->n)
        return t + p->n;
    if (t == p->m)
        return p->m + p->n * 2 - r;
    return (p->n + p->m) * 2 - t;
}
