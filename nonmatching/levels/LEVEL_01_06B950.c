/* USA LEVEL_01.REL:0x06B950, 468-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 20 differing words; first difference at +0x4C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Info {
    char pad_00[0x24];
    int key;
} Info;

typedef struct Owner {
    char pad_00[0x40];
    Info *info;
} Owner;

typedef struct Mover {
    float vel[3];
    union {
        unsigned short w;
        unsigned char b;
    } fl;
    char pad_0E[2];
    Owner *owner;
    int state;
} Mover;

typedef struct Surf {
    char pad_00[0x18];
    float level;
    char pad_1C[8];
    unsigned char flag_24;
    unsigned char flag_25;
} Surf;

extern unsigned char D_001F4630;
extern float D_0020F5A8;

extern float sqrtf(float x);
extern void func_078370(void *obj, int flag);
extern void func_078788(float t, void *obj, float *pos, float *dir, int mode);

int func_06B950(int unused, float *pos, Mover *m, float *out, void *obj, Surf *s, int key)
{
    int hit;
    float p[3];
    float d[3];
    float inv;

    hit = 0;
    if (m->state != 2 || m->owner->info->key != key) {
        if ((m->fl.w & 4) != 0) {
            if (s->flag_25 == 0)
                goto done;
            goto found;
        }
        if (s->flag_24 == 0) {
            hit = 0;
            if (!(s->level <= m->vel[1]) || ((m->fl.b ^ 1) & 1) == 0)
                goto done;
        }
      found:
        hit = 1;
        out[0] = pos[0];
        out[1] = pos[1];
        out[2] = pos[2];
    }
done:
    if ((D_001F4630 ^ 1) != 0) {
        p[0] = pos[0] + m->vel[0] * 0.01f;
        p[1] = pos[1] + m->vel[1] * 0.01f;
        p[2] = pos[2] + m->vel[2] * 0.01f;
        func_078370(obj, hit == 0);
        inv = 1.0f / sqrtf(m->vel[0] * m->vel[0] + m->vel[1] * m->vel[1] + m->vel[2] * m->vel[2]);
        d[0] = inv * m->vel[0];
        d[1] = inv * m->vel[1];
        d[2] = inv * m->vel[2];
        func_078788(D_0020F5A8, obj, p, d, 0);
    }
    return hit != 0;
}
