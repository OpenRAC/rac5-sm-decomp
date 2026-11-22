/* USA LEVEL_01.REL:0x02E278, 436-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 11 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern Rec *func_097658(int *out, int handle, int flag);

void func_02E278(int handle, float *pos, Src *src)
{
    int out[4];
    Rec *r;
    Rec *end;
    float angle;
    float c;
    float s;
    float *pp;

    r = func_097658(out, handle, 1);
    if (out[0] != 0) {
        end = r + out[0];
        if (r != end) {
            do {
                angle = (float)rand() * 4.656613e-10f * 6.2831855f + -3.1415927f;
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
}
