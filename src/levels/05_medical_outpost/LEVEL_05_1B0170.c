/* LEVEL_05:0x1B0170 -- switches the object into state 3 or 4 by the flag, copies the position from one of the two stored vectors and sets the timer to 1 or 0. */
typedef struct Sub { float v0[4]; float v10[3]; } Sub;
typedef struct Mid { char pad00[4]; Sub *s; } Mid;
typedef struct St { Mid *m; } St;
typedef struct Obj { char pad00[0x30]; float pos[3]; char pad3C[9]; unsigned char b45; char pad46[0xE]; St *f54; char pad58[0x18]; float f70; } Obj;
static __inline__ void Copy3(float *d, float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }
void func_1B0170(Obj *o, int flag)
{
    St *st = o->f54;
    if (flag) {
        Mid *m;
        Sub *s;
        o->b45 = 3;
        m = st->m;
        s = m->s;
        Copy3(o->pos, s->v10);
        o->f70 = 1.0f;
    } else {
        Mid *m;
        Sub *s;
        o->b45 = 4;
        m = st->m;
        s = m->s;
        Copy3(o->pos, s->v0);
        o->f70 = 0;
    }
}
