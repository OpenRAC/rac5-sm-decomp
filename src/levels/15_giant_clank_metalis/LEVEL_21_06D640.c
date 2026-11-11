/* LEVEL_21:0x06D640 -- placement copy of LEVEL_01_088F98.c: updates a node's attached pieces and swaps in its pending piece when done. */
typedef struct Piece {
    char pad0[0xC]; float fC; char pad10[4]; union { unsigned w14; unsigned char b14; } u;
} Piece;
typedef struct Item { char pad0[8]; Piece *p8; } Item;
typedef struct Mod { char pad0[0x30]; unsigned char b30; float f34; char pad38[4]; } Mod;
typedef struct {
    char pad0[4]; unsigned w04; float f08; int wC; char pad10[4]; Piece *p14; Piece *p18;
    int n1C; Item *items[4]; int n30; Mod *mods[1];
} Node;
extern int D_0014AF0C[1];
extern void func_06DC70(float dt, Piece *p, void *a, void *b);
extern void func_06D568(void *a, void *b, float dt);

void func_06D640(Node *s, void *a1, void *a2, float dt)
{
    float f20;
    float f21;
    int i;
    Piece *p;
    Item *it;
    void *x;
    unsigned t;

    f20 = dt;
    f21 = f20;
    D_0014AF0C[0] = s->wC;
    f20 = f20 * s->f08;
    if (s->p14 != 0) {
        if (s->p14->u.w14 & 2) func_06DC70(f20, s->p14, a1, a2);
    }
    for (i = 0; i < s->n1C; i++) {
        x = s->p18 ? 0 : a1;
        it = s->items[i];
        if (it != 0) {
            p = it->p8;
            if (p != 0) {
                if (p->u.w14 & 2) func_06DC70(f21, p, x, a2);
            }
        }
    }
    if (s->p18 != 0) {
        if (s->p18->u.w14 & 2) func_06DC70(f20, s->p18, a1, a2);
    }
    if (s->p18 != 0) {
        if (s->p18->u.w14 & 1) {
            func_06D568(&s->p18->u.w14, &s->p18->fC, f20);
            if ((s->p18->u.b14 ^ 1) & 1) {
                s->p14 = s->p18;
                s->p18->fC = -1.0f;
                s->p18->fC = -1.0f;
                s->p18 = 0;
                if (s->w04 & 2) {
                    s->p14->u.w14 |= 2;
                }
                t = s->w04 & ~1u;
                s->w04 = t & ~0x100u;
            }
        }
    }
    for (i = 0; i < s->n1C; i++) {
        p = s->items[i]->p8;
        if (p != 0) func_06D568(&p->u.w14, &p->fC, f21);
    }
    for (i = 0; i < s->n30; i++) {
        if (s->mods[i] != 0) {
            if (s->mods[i]->b30) func_06D568((char *)s->mods[i] + 0x38, &s->mods[i]->f34, f20);
        }
    }
}
