/* LEVEL_04:0x02DF18 -- placement copy of LEVEL_01_02E278.c: fills every record of an allocated emitter block from two templates and a random heading. */
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

typedef struct Rec {
    int w0;
    float a;
    float b;
    float pos[3];
    unsigned int c[3];
    float d[3];
    float cs;
    float sn;
} Rec;

typedef struct Src {
    float a;
    float b;
    float d[3];
    unsigned int c[3];
} Src;

extern Rec *func_09A760(int *out, int handle, int flag);

static __inline__ void Fill(Rec *r, int n, float *pos, Src *src)
{
    Rec *end;
    float angle;
    float c;
    float s;
    float *pp;
    float neg_pi;
    float two_pi;
    float inv;

    end = r + n;
    if (r != end) {
        neg_pi = -3.1415927f;
        two_pi = 6.2831855f;
        inv = 4.656613e-10f;
        do {
            angle = (float)rand() * inv * two_pi + neg_pi;
            r->w0 = 0;
            r->a = src->a;
            r->b = src->b;
            pp = r->pos;
            pp[0] = pos[0];
            pp[1] = pos[1];
            pp[2] = pos[2];
            r->c[0] = src->c[0];
            r->c[1] = src->c[1];
            r->c[2] = src->c[2];
            r->d[0] = src->d[0];
            r->d[1] = src->d[1];
            r->d[2] = src->d[2];
            c = cosf(angle);
            s = sqrtf(1.0f - c * c);
            if (angle < 0.0f) {
                s = -s;
            }
            r->cs = c;
            r->sn = s;
            r++;
        } while (r != end);
    }
}

void func_02DF18(int handle, float *pos, Src *src)
{
    int out;
    Rec *r;

    r = func_09A760(&out, handle, 1);
    if (out != 0) {
        Fill(r, out, pos, src);
    }
}
