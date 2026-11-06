/* LEVEL_02.REL:0x05E6C0, bounded 168-byte candidate.
 * Isolated pinned C object: 168 bytes; first linked
 * difference at body byte +50. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
typedef struct {
    float x, y, z;
} VEC;

typedef struct {
    char pad0[0x30];
    VEC pos;
    char pad1[0x200 - 0x3c];
    VEC dir;
} SELF;

typedef struct {
    char pad0[4];
    unsigned int verts;
    char pad1[0xc];
    unsigned short index;
} ARG;

int func_05E6C0(SELF *self, ARG *arg, int mode)
{
    VEC *pos;
    VEC *dir;
    float *v;
    unsigned int addr;
    float d[3];
    float dot;
    int r;

    if (mode != 3)
        return 0;
    pos = &self->pos;
    dir = &self->dir;
    addr = (arg->index << 4) + arg->verts - 0x10;
    v = (float *)addr;
    d[0] = v[0] - pos->x;
    dot = d[0] * dir->x;
    d[1] = v[1] - pos->y;
    dot += d[1] * dir->y;
    d[2] = v[2] - pos->z;
    dot += d[2] * dir->z;
    return dot < 0.0f;
}
