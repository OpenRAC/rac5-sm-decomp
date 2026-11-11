/* LEVEL_09:0x17EB18 -- seeds a scratch buffer from a table float and feeds eight table words to a helper pair. */

struct P58_17EB18 {
    float f00;
};

struct T17EB18 {
    char pad00[0x54];
    float **p54;
    struct P58_17EB18 *p58;
};

extern char D_00201A88[];
extern void func_11D4D0(float *buf, char *addr, float f);
extern void func_11EAB8(float *o, float *a, float *b);

void func_17EB18(struct T17EB18 *t)
{
    float f;
    unsigned int i;
    float **p;
    float *v;
    float buf[12];

    f = t->p58->f00;
    p = t->p54;
    func_11D4D0(buf, D_00201A88, f);
    i = 0;
    do {
        v = p[i];
        i++;
        func_11EAB8(v, v, buf);
    } while (i < 8);
}
