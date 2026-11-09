/* LEVEL_15:0x11DDA0 -- fills a particle record with random scaled values and derived vectors. */
struct Src {
    char pad00[0x34];
    float f34;
    float f38;
    char pad3C[4];
    float f40;
    float f44;
    float f48;
    float f4C;
    float f50;
    float f54;
    char pad58[0x24];
    char f7C[4];
};

struct Dst {
    float f00;
    float f04;
    char pad08[0x18];
    char f20[0x18];
    char f38[0x18];
    int f50;
    float f54;
    char f58[4];
    char pad5C[0x44];
    int fA0;
};

extern int rand(void);
extern void func_0E7720(char *, char *, int, float, float, float, float);
extern void func_0E74A8(char *, char *, int, float, float);
extern void func_0D0380(char *, char *, int);

void func_11DDA0(struct Dst *d, struct Src **pp)
{
    struct Src *s;
    char tmp[0x20];
    float x;
    float y;
    float z;

    s = *pp;
    d->fA0 = 0;
    x = s->f34;
    d->f00 = x * ((float)rand() * 4.656612873077393e-10f);
    y = s->f38;
    d->f04 = y * ((float)rand() * 4.656612873077393e-10f);
    z = (float)rand() * 4.6566123179658803e-10f;
    d->f50 = 0;
    d->f54 = z;
    func_0E7720((char *)d + 8, d->f20, 3, s->f40, s->f44, s->f48, s->f4C);
    func_0E74A8(tmp, d->f38, 3, s->f50, s->f54);
    func_0D0380(d->f58, s->f7C, 2);
}
