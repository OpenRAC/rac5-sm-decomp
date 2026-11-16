/* USA SCUS_976.15 boot: CAMERA_SetFovX__Ff, 0x01E68CB8.
 * Observed return extent: 280 bytes; the next-label interval is 344 bytes and
 * holds another directly called entry after this return. Ownership review is
 * pending.
 * Measured 14 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad: 288 compiled bytes, 241 equal positions in the
 *   280-byte body, first differing byte +0x5C. Every instruction is retail's;
 *   the compiler adds two padding nops before the division, whose divisor
 *   the previous instruction has just loaded, and retail has none there.
 * - gnu-ee-trial: 272 bytes, 176 equal; rebuilt default route: 272 bytes,
 *   154 equal. Both lack retail's two nops before the square root.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * camera_state is the word at 0x01EDE330 that accepted sources call
 * camera_current, declared as the member of a record (see
 * CAMERA_PreUpdate__Fv). The first pointer value is kept for two stores,
 * then the global is read again. Retail narrows the comparison result to a
 * byte before testing it, which a helper returning int assigned to a byte
 * reproduces; the helper and its name are an assumption. The two stores
 * are emitted in the opposite order to the source.
 * Reopen with a qualified division-padding rule that leaves a division
 * unpadded after a load of one of its operands.
 */
typedef struct {
    unsigned char unknown[0xF4];
    float field_F4;
    float field_F8;
    float field_FC;
    float field_100;
    float field_104;
    float field_108;
} tCAMERA;

typedef struct {
    tCAMERA *current;
} tCAMERA_STATE;

extern tCAMERA_STATE camera_state;
extern float cosf(float value);
extern float sqrtf(float value);

static inline int float_equal(float a, float b) {
    return __builtin_fabsf(a - b) <= 0.00001f;
}

void CAMERA_SetFovX__Ff(float fov_x) {
    tCAMERA *camera = camera_state.current;

    unsigned char equal = float_equal(fov_x, camera->field_F4);

    if (!equal) {
        float half = fov_x * 0.5f;
        float cosine = cosf(half);
        float sine = __builtin_sqrtf(1.0f - cosine * cosine);

        if (half < 0.0f)
            sine = -sine;
        camera->field_104 = sine;
        camera->field_100 = cosine;
        camera_state.current->field_108 = camera_state.current->field_104 / camera_state.current->field_100;
    }
    camera_state.current->field_F4 = fov_x;
}
