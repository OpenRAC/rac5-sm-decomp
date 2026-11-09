/* LEVEL_24:0x06BF40 -- placement copy of LEVEL_04_0744E0.c: advances a four-state animation timer. */
typedef struct Anim {
    char pad0[0x44];
    float f44;
    char pad48;
    unsigned char s49;
    unsigned char s4A;
} Anim;

typedef struct Def {
    char pad0[0x1C];
    unsigned f1C;
    char pad20[0xC];
    float f2C;
    float f30;
    float f34;
} Def;

extern void func_06D238(Anim *a, Def *d);
extern void func_06C2D8(Anim *a, Def *d);

void func_06BF40(Anim *a, Def *d)
{
    float step;

    if (a->s49 == 1) {
        func_06D238(a, d);
        a->f44 = a->f44 - 0.03333333507180214f;
        if (a->f44 <= 0.0f) {
            step = d->f2C / (float)d->f1C;
            while (a->f44 <= 0.0f && a->s4A != d->f1C) {
                func_06C2D8(a, d);
                a->f44 = a->f44 + step;
            }
            if (a->s4A == d->f1C) {
                a->f44 = 0.0f;
                a->s49 = 2;
            }
        }
    } else if (a->s49 == 2) {
        func_06D238(a, d);
        a->f44 = a->f44 + 0.03333333507180214f;
        if (0.0f <= d->f30 && d->f30 <= a->f44) {
            a->f44 = d->f34;
            a->s49 = 3;
        }
    } else if (a->s49 == 3) {
        a->f44 = a->f44 - 0.03333333507180214f;
        func_06D238(a, d);
        if (a->f44 / d->f34 <= 0.0f) {
            a->f44 = 0.0f;
            a->s49 = 0;
        }
    }
}
