/* LEVEL_01.REL:0x16B070: reviewed 264-byte candidate, held for ABI review.
 * Per-frame update of a timed effect object.
 * pinned C with gnu-ee-trial links 264/264 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x64];
    unsigned flags;
} Tgt;
typedef struct {
    void *h;
    int w4;
    char pad0[0x44 - 8];
    Tgt *tgt;
    float pos[3];
    float d[3];
    float f60;
    char pad1[4];
    int state;
} Obj;
extern Obj *func_16B640(int a);
extern void func_16B5B0(void *h);
extern void func_0807B0(Tgt *t, float *p, int a, int b);
extern void func_06DF88(int *p);

void func_16B070(int a, float *v)
{
    Obj *o = func_16B640(a);
    float *d;
    float *p;
    if (o == 0)
        return;
    o->f60 = o->f60 - 1.0f;
    if (o->f60 <= 0.0f) {
        func_16B5B0(o->h);
        return;
    }
    if (o->state != 2) {
        if (o->state == 3 && o->tgt != 0) {
            if ((o->tgt->flags & 6) != 0)
                o->tgt = 0;
            else
                func_0807B0(o->tgt, o->pos, 0, 0);
        }
    } else {
        d = o->d;
        p = o->pos;
        p[0] = v[0] + d[0];
        p[1] = v[1] + d[1];
        p[2] = v[2] + d[2];
    }
    if (o->state != 0)
        func_06DF88(&o->w4);
}
