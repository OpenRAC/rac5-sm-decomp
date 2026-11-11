/* LEVEL_10:0x17EEB8 -- placement copy of LEVEL_01_17C830.c: fetches the object's bounding point; when found, copies it to both corners, stretches one corner's height by the table entry for the record's kind and grows the box by one unit on every side. */
struct Rec {
    char pad00[0x21];
    unsigned char b21;
};

struct Obj {
    char pad00[0x58];
    struct Rec *rec;
};

struct Ent {
    char pad00[0x10];
    float f10;
    char pad14[0xC];
};

extern struct Ent D_00210918[];
extern int func_082B48(float *out, struct Obj *o);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_17EEB8(float *lo, float *hi, struct Obj *o)
{
    float v[3];
    struct Rec *rec;
    float t;

    rec = o->rec;
    if (func_082B48(v, o) == 0) {
        return 0;
    }
    Copy3(lo, v);
    Copy3(hi, v);
    t = D_00210918[rec->b21].f10;
    if (0.0f < t) {
        hi[1] = v[1] + t;
    } else {
        lo[1] = lo[1] + t;
    }
    lo[0] = lo[0] - 1.0f;
    lo[1] = lo[1] - 1.0f;
    lo[2] = lo[2] - 1.0f;
    hi[0] = hi[0] + 1.0f;
    hi[1] = hi[1] + 1.0f;
    hi[2] = hi[2] + 1.0f;
    return 1;
}
