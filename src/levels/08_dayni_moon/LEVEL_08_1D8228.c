/* LEVEL_08:0x1D8228 -- placement copy of LEVEL_04_1B13B0.c: updates two ping-pong short buffers from an object's index table (damped sum, then scaled mix). */
typedef struct {
    short a[0x1F0];
    short b[0x1F0];
    unsigned int cnt;
} Bufs;

typedef struct {
    char pad00[0x58];
    Bufs *bufs;
} Owner;

typedef struct {
    unsigned short cnt;
    unsigned short idx[7];
} Entry;

typedef struct {
    char pad00[0x24];
    unsigned int n;
    Entry *tbl;
} Net;

typedef struct {
    char pad00[4];
    int type;
    char pad08[0x14];
    Net *net;
} Msg;

extern float D_002740A0[];

void func_1D8228(Owner *o, Msg *m)
{
    Bufs *buf;
    Net *net;
    short *src;
    short *dst;
    unsigned int cnt;
    unsigned int i;
    int j;
    Entry *e;
    unsigned int k;
    int l;
    Entry *f;
    int sum;
    int v;

    buf = o->bufs;
    if (m->type == 0x10000006) {
        net = m->net;
        if (net != 0) {
            cnt = buf->cnt + 1;
            buf->cnt = cnt;
            if ((cnt & 1) == 0) {
                dst = buf->b;
                src = buf->a;
            } else {
                dst = buf->a;
                src = dst + 0x1F0;
            }
            for (i = 0; i < net->n; i++) {
                e = &net->tbl[i];
                sum = 0;
                for (j = 0; j < e->cnt; j++) {
                    sum += src[e->idx[j]];
                }
                sum = sum / 4;
                sum = sum - dst[i];
                dst[i] = sum - sum / 128;
            }
            for (k = 0; k < net->n; k++) {
                f = &net->tbl[k];
                v = dst[k] << 6;
                for (l = 0; l < f->cnt; l++) {
                    v += dst[f->idx[l]];
                }
                dst[k] = (int)((float)v * D_002740A0[f->cnt]);
            }
        }
    }
}
