/* USA LEVEL_15.REL:0x136348, 296-byte candidate (21 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x44.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x14];
    float f14;
    float f18;
} Voice;

typedef struct Obj Obj;

typedef struct {
    char pad_00[0x10];
    float limit;
} Range;

typedef struct {
    Voice *voice;
    char pad_04[0x88];
    float pos[3];
} Emitter;

extern Emitter D_002F4FBC;
extern float D_00177D78[];
extern Range D_002F2FE0;
extern float D_0015D5C8[];
extern float D_0015D5F0;
extern float D_0015D5D0;

extern void func_12B488(int *slot, int id);
extern Voice *func_12B2C0(int idx, Obj *obj, void *pos, void **out, float f0, float f1, float f2, float f3);

static __inline__ void Stop(int *slot)
{
    if (slot != 0) {
        if (*slot != 0) {
            func_12B488(slot, 0);
        }
    }
}

static __inline__ float Dist2(float *a, float *b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];

    return dx * dx + dy * dy + dz * dz;
}

void func_136348(void)
{
    float *p = D_002F4FBC.pos;
    int *slot = (int *)&D_002F4FBC.voice;
    float *q;

    Stop(slot);
    q = D_00177D78;
    q += 12;
    if (!(D_002F2FE0.limit < Dist2(p, q))) {
        func_12B2C0(0, (Obj *)&D_002F2FE0, p, (void **)slot, D_0015D5C8[3], D_0015D5C8[4], D_0015D5C8[10] * 0.2f, D_0015D5C8[2]);
    }
    if (D_002F4FBC.voice != 0) {
        D_002F4FBC.voice->f14 = D_0015D5F0 * 0.2f;
    }
    if (D_002F4FBC.voice != 0) {
        D_002F4FBC.voice->f18 = D_0015D5D0 * 0.5f;
    }
}
