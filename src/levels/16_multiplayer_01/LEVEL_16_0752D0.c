/* LEVEL_16:0x0752D0 -- counts records of a 0x80-byte table whose flag bit 0 is clear. */
typedef struct R { char p[0x64]; unsigned int flags; char q[0x18]; } R;
typedef struct O { char p[0xC]; R *recs; char q[0x20]; unsigned int count; } O;

int func_0752D0(O *o)
{
    R *base = o->recs;
    unsigned int count = o->count;
    R *end = base + count;
    R *r;
    int n = 0;

    for (r = base; r != end; r++) {
        int t = n + 1;
        if ((r->flags & 1) == 0)
            n = t;
    }
    return n;
}
