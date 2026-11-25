/* USA SCUS_976.15 boot: MCPTRANS_DREAM_Animate__Ff, 0x01E6D990.
 * Observed body: 244 bytes, followed by a padding word inside the 248-byte
 * interval.
 * Measured 17 November 2026: all 244 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It advances the dream transition: a
 * velocity accumulator and an elapsed-time value grow by the frame time, an
 * optional ramp follows the elapsed time, and a sine-modulated offset minus
 * the ramp is written to all three components of a destination vector. It
 * then pushes the drag vector to the particle system, updates the speck
 * emitter and starts the sound once.
 * The destination is reached through a pointer taken just before the
 * expression, and its y and z members are named with the x member written
 * between them (stores come out in reverse source order).
 */
typedef struct { float x, y, z; } VEC3;
extern float mcptrans_dream_rateA;
extern float mcptrans_dream_velZ;
extern float mcptrans_dream_t;
extern float mcptrans_dream_ramp;
extern float mcptrans_dream_k1;
extern float mcptrans_dream_k3;
extern float mcptrans_dream_k4;
extern float mcptrans_dream_k5;
extern unsigned char mcptrans_dream_flag;
extern unsigned char mcptrans_dream_active;
extern VEC3 mcptrans_dream_dst;
extern VEC3 mcptrans_dream_drag;
extern float sinf(float);
extern void GCSPAR_StreckSetDragMotion__FRC4VEC3(const VEC3 *);
extern void MCPTRANS_DREAM_SpeckEmitterUpdate__Fv(void);
extern void MCPTRANS_DREAM_StartSound__Fv(void);

void MCPTRANS_DREAM_Animate__Ff(float dt) {
    float v;
    VEC3 *d;
    mcptrans_dream_velZ += mcptrans_dream_rateA * dt;
    mcptrans_dream_t += dt;
    if (mcptrans_dream_flag != 0)
        mcptrans_dream_ramp = mcptrans_dream_k5 * mcptrans_dream_t;
    d = &mcptrans_dream_dst;
    v = mcptrans_dream_k1 + sinf(mcptrans_dream_t * mcptrans_dream_k3) * mcptrans_dream_k4 - mcptrans_dream_ramp;
    d->y = v;
    mcptrans_dream_dst.x = v;
    d->z = v;
    GCSPAR_StreckSetDragMotion__FRC4VEC3(&mcptrans_dream_drag);
    MCPTRANS_DREAM_SpeckEmitterUpdate__Fv();
    if (mcptrans_dream_active == 0) {
        mcptrans_dream_active = 1;
        MCPTRANS_DREAM_StartSound__Fv();
    }
}
