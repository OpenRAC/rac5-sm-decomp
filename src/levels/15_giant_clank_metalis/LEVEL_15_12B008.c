/* LEVEL_15:0x12B008 -- resolves each source record through a helper, stores the result with a squared value, and scales a source field. */
struct Ent {
    char *p;
    int pad[3];
    float f10;
};

struct Src {
    char *p0;
    float f4;
    int pad8[8];
    float f28;
};

extern char D_002F2FE0[];
extern char D_0015D5C8[];
extern char *func_0EDE90(char *p);

void func_12B008(void)
{
    struct Ent *e;
    struct Src *s;
    char *v;

    e = (struct Ent *)D_002F2FE0;
    s = (struct Src *)D_0015D5C8;
    do {
        v = func_0EDE90(s->p0);
        e->p = v;
        if (v != 0) {
            e->f10 = *(float *)(v + 0x1C) * *(float *)(v + 0x1C);
        } else {
            e->f10 = 0.0f;
        }
        *(float *)(e->p + 0x28) = -1.0f;
        e++;
        s->f28 = s->f4 * 0.75f;
        s++;
    } while ((int)e < (int)(D_002F2FE0 + 0x3C0));
}
