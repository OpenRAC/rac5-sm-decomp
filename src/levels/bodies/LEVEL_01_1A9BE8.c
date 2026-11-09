/* LEVEL_01:0x1A9BE8 -- finds the point index nearest a position. */
typedef struct { float x, y, z, w; } V4;
typedef struct { char pad0[0x10]; float x, y, z; } Pt;
typedef struct { char pad0[0x24]; unsigned count; char pad1[8]; Pt *pts; } Mesh;
typedef struct { char pad0[4]; int tag; char pad1[0x14]; Mesh *mesh; } Node;
typedef struct { char pad0[4]; Node *node; char pad1[0x2C]; } Ent;
typedef struct { char pad0[4]; Ent *ents; } Tbl;
typedef struct { char pad0[0x40]; Tbl *tbl; unsigned char idx; } Obj;

unsigned func_1A9BE8(Obj *o, V4 p)
{
    Node *n;
    Mesh *m;
    Pt *pt;
    unsigned i, best, cnt;
    float min, dx, dy, dz, d, px, py, pz;

    n = o->tbl->ents[o->idx].node;
    if (n->tag != 0x10000006)
        return 0;
    m = n->mesh;
    if (m == 0)
        return 0;
    cnt = m->count;
    i = 0;
    min = 9999999.0f;
    best = 0;
    if (cnt != 0) {
        pt = m->pts;
        px = p.x;
        py = p.y;
        pz = p.z;
        do {
            dx = px - pt->x;
            dy = py - pt->y;
            dz = pz - pt->z;
            d = dx * dx + dy * dy + dz * dz;
            if (d < min) {
                min = d;
                best = i;
            }
            i++;
            pt++;
        } while (i < cnt);
    }
    return best;
}
