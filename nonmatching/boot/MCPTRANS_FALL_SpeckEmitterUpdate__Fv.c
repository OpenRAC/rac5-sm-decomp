/* USA SCUS_976.15 boot: MCPTRANS_FALL_SpeckEmitterUpdate__Fv, 0x01E6D598.
 * Observed body: 456 bytes, filling its interval. Measured 28 November 2026:
 * all 456 body bytes are exact after an independent link at the retail
 * address under rebuilt gnu-ee-trial, -O2 -G0, default GNU assembler (with or
 * without -fno-gcse). The rate is read once into a local used by the zero
 * test, the reciprocal and the budget sum; reading the global three times
 * reloads it (the 26 November form: 394 of 456 bytes under the pinned route
 * with -fno-gcse, 464 bytes under gnu-ee-trial). The pinned route with the
 * local gives 448 bytes. Local exactness with rebuilt tools is not
 * qualification, promotion or C matching credit.
 * Reconstructed from the retail boot. It builds a box emitter on the stack
 * from the sum and difference of a centre vector and a half-extent vector,
 * copies a 4x3 float block (the source has a padding word after each triple)
 * into a packed 12-float block, and accumulates a particle budget: the rate is
 * added to a carried fraction, the whole part is emitted through EmitParticles
 * with the leftover sub-frame time and its reciprocal step, and the fraction
 * is carried over. Source shape that mattered: the emitter, the carried
 * fraction and the display handle are reached through locals (a pointer to the
 * stack emitter, a pointer to the carried value and a handle read after the
 * copy), which gives the callee-saved registers of the retail; the zero-rate
 * test is written with != so the divide comes first. The 12-float copy keeps its retail
 * store order (first float, then the third triple, then the rest of the
 * first two triples); natural index order gives 440 of 456 bytes.
 */
typedef struct { float x, y, z; } VEC3;
typedef struct { float m[16]; } SRC;
typedef struct { float f[12]; } DST;
typedef struct {
    VEC3 lo;
    VEC3 hi;
    DST *dst;
    float *aux;
} GCSPAR_StreckBoxEmitter;
extern float D_01EF0750;
extern float D_01EF0758[];
extern float D_01EF0768[];
extern float D_01EF0778[];
extern int D_01EF07A4;
extern float D_01EF07B8;
extern DST D_01F67C88;
extern float D_01F67CC8[];
extern float floorf(float);
extern void EmitParticles__FiPC23GCSPAR_StreckBoxEmitteriff(int, const GCSPAR_StreckBoxEmitter *, int, float, float);

void MCPTRANS_FALL_SpeckEmitterUpdate__Fv(void) {
    GCSPAR_StreckBoxEmitter e;
    int h;
    GCSPAR_StreckBoxEmitter *pe = &e;
    float *pacc = &D_01EF07B8;
    float inv, acc, total, n, rate;
    float *s = D_01F67CC8;
    DST *d = &D_01F67C88;
    pe->lo.x = D_01EF0758[0] - D_01EF0768[0];
    pe->lo.y = D_01EF0758[1] - D_01EF0768[1];
    pe->lo.z = D_01EF0758[2] - D_01EF0768[2];
    pe->hi.x = D_01EF0758[0] + D_01EF0768[0];
    pe->hi.y = D_01EF0758[1] + D_01EF0768[1];
    pe->hi.z = D_01EF0758[2] + D_01EF0768[2];
    d->f[0] = s[0];
    d->f[6] = s[8];
    d->f[7] = s[9];
    d->f[8] = s[10];
    d->f[1] = s[1];
    d->f[2] = s[2];
    d->f[3] = s[4];
    d->f[4] = s[5];
    d->f[5] = s[6];
    d->f[9] = s[12];
    d->f[10] = s[13];
    d->f[11] = s[14];
    pe->dst = d;
    h = D_01EF07A4;
    pe->aux = D_01EF0778;
    rate = D_01EF0750;
    if (rate != 0.0f) inv = 1.0f / rate; else inv = 0.0f;
    acc = *pacc;
    total = acc + rate;
    n = floorf(total);
    if (n > 0.0f) {
        EmitParticles__FiPC23GCSPAR_StreckBoxEmitteriff(h, pe, (int)n, (1.0f - acc) * inv, inv);
        *pacc = total - n;
    } else *pacc = total;
}
