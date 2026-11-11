/* LEVEL_20:0x02A0D0 -- placement copy of LEVEL_16_02D5C8.c: records an id in two small tables unless it is already present. */

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

extern struct Glob02D5C8 *D_00137A28;
extern struct Ent02D5C8 D_001396A0[];
extern struct Rec02D5C8 D_00139708[];
extern int D_001398DC;
extern unsigned int D_001398E0;

void func_02A0D0(int x, unsigned char y)
{
    struct Ent02D5C8 *p;
    struct Ent02D5C8 *end;
    unsigned int i;

    p = D_001396A0;
    end = p + D_001398DC;
    for (;;) {
        if (p >= end) {
            p->w0 = 0;
            p->w4 = x;
            D_001398DC = D_001398DC + 1;
            break;
        }
        if (p->w4 == x) {
            break;
        }
        p++;
    }
    if (D_00137A28->p2D8[x].cols[y] != 0) {
        struct Rec02D5C8 *r;

        r = &D_00139708[D_001398E0];
        D_001398E0 = D_001398E0 + 1;
        r->b8 = y;
        r->w4 = x;
        r->w0 = 0;
    }
    if (D_00137A28->p2D8[x].cols[2] != 0) {
        struct Rec02D5C8 *e;
        struct Rec02D5C8 *r;

        for (i = 0; i < D_001398E0; i++) {
            e = &D_00139708[i];
            if (e->w4 == x && e->b8 == 2) {
                return;
            }
        }
        r = &D_00139708[D_001398E0];
        D_001398E0 = D_001398E0 + 1;
        r->b8 = 2;
        r->w4 = x;
        r->w0 = 0;
    }
}
