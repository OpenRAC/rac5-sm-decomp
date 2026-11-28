/* USA SCUS_976.15 boot: MCPTRANS_UpdateCamera__Ff, 0x01E69F78.
 * Observed body: 612 bytes, followed by one zero alignment word inside the
 * 616-byte interval.
 * Measured 28 November 2026: all 612 body bytes (and the following zero
 * word) are exact after an independent link at the retail address with the
 * pinned cpp, gnu-ee-trial-divpad cc1 -O2 -G0 and the pinned SN Ps2EeAs
 * 1.8.19.316 assembler (sha256 c839dd63...). Under every GNU assembler
 * available (pinned, ee-sdk, ee-frozen, span5, span5b, r5900-mfc1) one byte
 * differs: the join label of the clamp is bound after the compare/branch
 * hazard nop, so the branch at byte 104 is one word short (611 of 612;
 * matching-blockers "Assembler and alignment together"). The default pinned
 * and gnu-ee-trial cc1 lack the two division/square-root pad nops (596
 * bytes). The divpad profile has no boot route yet (proposed in PR #317).
 * Local exactness with rebuilt tools is not qualification, promotion or C
 * matching credit.
 * Reconstructed from the retail boot. The generic transition camera: dt is
 * scaled, a timer advances, a blend factor ramps towards 1 or 0 by 0.2 per
 * unit time depending on a flag, the camera target moves towards a goal by
 * that fraction, and the normalized target becomes the third row of the
 * transition camera matrix after VEC_LookAtUpLeft builds the first two. The
 * fourth row is copied from a stored position when transition_state is 1
 * and is otherwise the origin. Like MCPTRANS_SHRINK_UpdateCamera__Ff it
 * returns the matrix address (left in v0 by the retail); the accepted
 * caller MCP_UpdateCameraCB__FPfT014CameraSystemIDPv declares it void.
 * Source shape that mattered: the state test as an inline 0/1 predicate in
 * the form of MCPTRANS_TextTransition__Fv (xori/beqz instead of beq; it also
 * fixes the argument order before the call) and the row writes through
 * inline pointer helpers (float stores from registers). Helper names are
 * descriptive placeholders; the matrix row layout follows the 0x30 position
 * member used by MCPTRANS_UpdateStarStreaks__Fv.
 * Reopen for promotion when a boot route for gnu-ee-trial-divpad with the
 * ps2eeas assembler is qualified, and after the prototype conflict is resolved.
 */
typedef struct { float x, y, z; } VEC3;
typedef struct { float x, y, z, w; } VEC4;
typedef struct MATRIX4 {
    VEC4 v[4];
} MATRIX4;
extern float D_01EF036C;
extern float D_01EDE344;
extern unsigned char D_01F66FE0;
extern float D_01F66FDC;
extern VEC3 D_01F66FD0;
extern VEC3 D_01F66F00;
extern MATRIX4 D_01F66C40;
extern int transition_state;
extern VEC4 D_01EF05D0;
extern float sqrtf(float);

static inline void Copy3(VEC3 *d, const VEC3 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static inline void Copy4(VEC4 *d, const VEC4 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

static inline int IsState1(void) {
    return transition_state == 1;
}

static inline void Set4(VEC4 *d, float x, float y, float z, float w) {
    d->x = x;
    d->y = y;
    d->z = z;
    d->w = w;
}
extern void VEC_LookAtUpLeft__FP4VEC3T0PC4VEC3(VEC3 *, VEC3 *, const VEC3 *);

MATRIX4 *MCPTRANS_UpdateCamera__Ff(float dt) {
    VEC3 step;
    VEC3 diff;
    VEC3 dir;
    float s;
    float inv;
    dt = dt * D_01EF036C;
    D_01EDE344 += dt;
    if (D_01F66FE0 != 0) {
        D_01F66FDC += dt * 0.2f;
        if (D_01F66FDC > 1.0f)
            D_01F66FDC = 1.0f;
    } else {
        D_01F66FDC -= dt * 0.2f;
        if (D_01F66FDC < 0.0f)
            D_01F66FDC = 0.0f;
    }
    diff.x = D_01F66F00.x - D_01F66FD0.x;
    diff.y = D_01F66F00.y - D_01F66FD0.y;
    diff.z = D_01F66F00.z - D_01F66FD0.z;
    s = dt * D_01F66FDC;
    step.x = s * diff.x;
    step.y = s * diff.y;
    step.z = s * diff.z;
    D_01F66FD0.x = step.x + D_01F66FD0.x;
    D_01F66FD0.y = step.y + D_01F66FD0.y;
    D_01F66FD0.z = step.z + D_01F66FD0.z;
    dir = D_01F66FD0;
    inv = 1.0f / sqrtf(dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
    dir.x = inv * dir.x;
    dir.y = inv * dir.y;
    dir.z = inv * dir.z;
    VEC_LookAtUpLeft__FP4VEC3T0PC4VEC3((VEC3 *)&D_01F66C40.v[0], (VEC3 *)&D_01F66C40.v[1], &dir);
    Copy3((VEC3 *)&D_01F66C40.v[2], &dir);
    if (!IsState1())
        Set4(&D_01F66C40.v[3], 0.0f, 0.0f, 0.0f, 1.0f);
    else
        Copy4(&D_01F66C40.v[3], &D_01EF05D0);
    return &D_01F66C40;
}
