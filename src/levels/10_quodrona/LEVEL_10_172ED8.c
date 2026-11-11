/* LEVEL_10:0x172ED8 -- installs nine component vtables into one block, records their pointers, and runs each component's init. */

struct Vt172ED8 {
    char pad0[8];
    short delta;
    short idx;
    void (*fn)(void *self, void *owner);
};

struct Ent172ED8 {
    struct Vt172ED8 *vt;
};

struct Mgr172ED8 {
    char pad0[0x58];
    char *mem;
};

struct Obj172ED8 {
    struct Mgr172ED8 *mgr;
    char pad4[0x48];
    struct Ent172ED8 *slot[9];
};

extern char D_0022A3F8[];
extern char D_0022A3B8[];
extern char D_0022A378[];
extern char D_0022A338[];
extern char D_0022A2F8[];
extern char D_0022A2B8[];
extern char D_0022A278[];
extern char D_0022A238[];
extern char D_0022A1F8[];

void func_172ED8(struct Obj172ED8 *o)
{
    struct Ent172ED8 **sl;
    struct Ent172ED8 **lp;
    char *p;
    int i;

    sl = o->slot;
    p = o->mgr->mem;
    {
        char *q0;

        q0 = p;
        if (q0 != 0) {
            *(char **)q0 = D_0022A3F8;
        }
        o->slot[0] = (struct Ent172ED8 *)q0;
    }
    {
        char *q1;

        q1 = p + 0x8;
        if (q1 != 0) {
            *(char **)q1 = D_0022A3B8;
        }
        sl[1] = (struct Ent172ED8 *)q1;
    }
    {
        char *q2;

        q2 = p + 0xC;
        if (q2 != 0) {
            *(char **)q2 = D_0022A378;
        }
        sl[2] = (struct Ent172ED8 *)q2;
    }
    {
        char *q3;

        q3 = p + 0x14;
        if (q3 != 0) {
            *(char **)q3 = D_0022A338;
        }
        sl[3] = (struct Ent172ED8 *)q3;
    }
    {
        char *q4;

        q4 = p + 0x18;
        if (q4 != 0) {
            *(char **)q4 = D_0022A2F8;
        }
        sl[4] = (struct Ent172ED8 *)q4;
    }
    {
        char *q5;

        q5 = p + 0x1C;
        if (q5 != 0) {
            *(char **)q5 = D_0022A2B8;
        }
        sl[5] = (struct Ent172ED8 *)q5;
    }
    {
        char *q6;

        q6 = p + 0x40;
        if (q6 != 0) {
            *(char **)q6 = D_0022A278;
        }
        sl[6] = (struct Ent172ED8 *)q6;
    }
    {
        char *q7;

        q7 = p + 0x48;
        if (q7 != 0) {
            *(char **)q7 = D_0022A238;
        }
        sl[7] = (struct Ent172ED8 *)q7;
    }
    {
        char *q8;

        q8 = p + 0x4C;
        if (q8 != 0) {
            *(char **)q8 = D_0022A1F8;
        }
        sl[8] = (struct Ent172ED8 *)q8;
    }
    lp = sl;
    for (i = 0; i < 9; i++) {
        struct Ent172ED8 *e;

        e = *lp++;
        e->vt->fn((char *)e + e->vt->delta, o);
    }
}
