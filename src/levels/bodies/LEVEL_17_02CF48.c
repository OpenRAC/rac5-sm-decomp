/* LEVEL_17:0x02CF48 -- placement copy of LEVEL_16_02D5C8.c: records an id in two small tables unless it is already present. */

struct Ent02D5C8 {
    int w0;
    int w4;
};

struct Rec02D5C8 {
    int w0;
    int w4;
    unsigned char b8;
    char pad9[3];
};

struct Row02D5C8 {
    char pad0[0x14];
    int cols[11];
};

struct Glob02D5C8 {
    char pad0[0x2D8];
    struct Row02D5C8 *p2D8;
};

extern struct Glob02D5C8 *D_001D13A8;
extern struct Ent02D5C8 D_001D3020[];
extern struct Rec02D5C8 D_001D3088[];
extern int D_001D325C;
extern unsigned int D_001D3260;

void func_02CF48(int x, unsigned char y)
{
    struct Ent02D5C8 *p;
    struct Ent02D5C8 *end;
    unsigned int i;

    p = D_001D3020;
    end = p + D_001D325C;
    for (;;) {
        if (p >= end) {
            p->w0 = 0;
            p->w4 = x;
            D_001D325C = D_001D325C + 1;
            break;
        }
        if (p->w4 == x) {
            break;
        }
        p++;
    }
    if (D_001D13A8->p2D8[x].cols[y] != 0) {
        struct Rec02D5C8 *r;

        r = &D_001D3088[D_001D3260];
        D_001D3260 = D_001D3260 + 1;
        r->b8 = y;
        r->w4 = x;
        r->w0 = 0;
    }
    if (D_001D13A8->p2D8[x].cols[2] != 0) {
        struct Rec02D5C8 *e;
        struct Rec02D5C8 *r;

        for (i = 0; i < D_001D3260; i++) {
            e = &D_001D3088[i];
            if (e->w4 == x && e->b8 == 2) {
                return;
            }
        }
        r = &D_001D3088[D_001D3260];
        D_001D3260 = D_001D3260 + 1;
        r->b8 = 2;
        r->w4 = x;
        r->w0 = 0;
    }
}
