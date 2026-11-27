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
 * Names, 26 November 2026: mcptrans_dream_active and mcptrans_dream_sound
 * are the names already used on master; the drag vector is the argument
 * of GCSPAR_StreckSetDragMotion and the destination vector mirrors
 * mcptrans_fall_dstVec of the accepted MCPTRANS_FALL_Animate__Ff. The
 * other values have no evidence for a name yet and keep their addresses.
 */
typedef struct { float x, y, z; } VEC3;
extern float D_01EF07DC;
extern float D_01EF07E0;
extern float D_01EF0850;
extern float D_01EF0854;
extern float D_01EF07E4;
extern float D_01EF07E8;
extern float D_01EF07EC;
extern float D_01EF07F4;
extern unsigned char D_01EF07F0;
extern unsigned char mcptrans_dream_active;
extern VEC3 mcptrans_dream_dstVec;
extern VEC3 mcptrans_dream_drag;
extern float sinf(float);
extern void GCSPAR_StreckSetDragMotion__FRC4VEC3(const VEC3 *);
extern void MCPTRANS_DREAM_SpeckEmitterUpdate__Fv(void);
extern void MCPTRANS_DREAM_StartSound__Fv(void);

void MCPTRANS_DREAM_Animate__Ff(float dt) {
    float v;
    VEC3 *d;
    D_01EF07E0 += D_01EF07DC * dt;
    D_01EF0850 += dt;
    if (D_01EF07F0 != 0)
        D_01EF0854 = D_01EF07F4 * D_01EF0850;
    d = &mcptrans_dream_dstVec;
    v = D_01EF07E4 + sinf(D_01EF0850 * D_01EF07E8) * D_01EF07EC - D_01EF0854;
    d->y = v;
    mcptrans_dream_dstVec.x = v;
    d->z = v;
    GCSPAR_StreckSetDragMotion__FRC4VEC3(&mcptrans_dream_drag);
    MCPTRANS_DREAM_SpeckEmitterUpdate__Fv();
    if (mcptrans_dream_active == 0) {
        mcptrans_dream_active = 1;
        MCPTRANS_DREAM_StartSound__Fv();
    }
}
