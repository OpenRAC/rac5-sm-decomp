/* USA LEVEL_01.REL:0x0DBFF0, 300-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 3 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float a;
    float b;
    float c;
    int d;
    int e;
    int f;
    float g;
    int h;
    unsigned char i;
    unsigned char j;
    char pad22[2];
} Sub;

typedef struct {
    char pad00[8];
    int w08;
    float pos[3];
    float f18;
    char pad1C[4];
    float f20;
    Sub sub;
    char pad48[0x24];
} Rec;

extern void *memset(void *p, int c, unsigned int n);
extern Rec *func_097658(int *out, void *owner, int n);

void func_0DBFF0(void *owner, float *pos, unsigned int color, int e, int h, int j, float f18, float b, float a)
{
    int ok;
    Rec *r;
    Sub *p;

    r = func_097658(&ok, owner, 1);
    if (ok != 0) {
        memset(r, 0, 0x6C);
        p = &r->sub;
        r->f18 = f18;
        r->f20 = 1.0f;
        r->w08 = color;
        if (pos != 0) {
            r->pos[0] = pos[0];
            r->pos[1] = pos[1];
            r->pos[2] = pos[2];
            p->i = 0;
        } else {
            p->i = 1;
        }
        p->h = h;
        p->j = j;
        p->d = color >> 24;
        p->c = b;
        p->e = e;
        p->b = a;
        p->a = a;
        p->f = 0;
        p->g = 0.033333335f / a;
    }
}
