/* LEVEL_04:0x1E72C8 -- per-frame update for a pickup: plays its cue, spawns the offset effect, then dispatches the state step. */
typedef struct Pos {
    char pad[0x30];
    float x, y, z;
} Pos;

typedef struct Self {
    char pad0[0x29];
    unsigned char state;
} Self;

extern float sqrtf(float x);
extern int func_08B220(int k);
extern void func_0B7E80(int a, int b);
extern Pos *func_1D8DE8(void *b, void *c);
extern Pos *func_003258(void);
extern float func_1D7428(Pos *p);
extern void func_07B2A8(char *p, float *e, int a, int b);
extern int func_1D8C70(void *b, void *c, void *d, Pos *p, float f);
extern void func_1E6EC8(Self *s, void *b, void *c, float t);
extern void func_1E6E48(Self *s, void *b);

void func_1E72C8(Self *self, void *b, void *c, float t)
{
    int bit;
    Pos *p;
    Pos *q;
    float *pp;
    float d[3];
    float e[3];
    float len2;
    float inv;

    bit = (func_08B220(0x10) >> 13) & 1;
    if (!bit) {
        switch (self->state) {
        case 1:
            func_0B7E80(3, 3);
            break;
        case 0:
            func_0B7E80(2, 3);
            break;
        case 2:
            func_0B7E80(1, 3);
            break;
        }
    }
    if (self->state == 1) {
        p = func_1D8DE8(b, c);
        if (p != 0) {
            pp = &p->x;
            q = func_003258();
            d[0] = p->x - q->x;
            d[2] = pp[2] - q->z;
            t = func_1D7428(p) * -1.2f;
            len2 = d[0] * d[0] + d[2] * d[2];
            if (!(len2 < 2.3841858e-07f)) {
                len2 = t / sqrtf(d[0] * d[0] + d[2] * d[2]);
                d[0] = len2 * d[0];
                d[2] = len2 * d[2];
            }
            d[1] = 0.5f;
            e[0] = pp[0] + d[0];
            e[1] = pp[1] + d[1];
            e[2] = pp[2] + d[2];
            func_07B2A8((char *)self + 0x2C, e, 2, 0);
        }
        if (bit) {
            func_1D8C70(b, c, b, p, 0.5f);
            self->state = 3;
            func_0B7E80(0, 3);
        }
    } else {
        if (bit) {
            func_1E6EC8(self, b, c, t);
            func_0B7E80(0, 3);
        }
    }
    func_1E6E48(self, b);
}
