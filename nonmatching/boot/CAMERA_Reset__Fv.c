/* USA SCUS_976.15 boot: CAMERA_Reset__Fv, 0x01E68658.
 * Observed body: 452 bytes; the 464-byte interval ends with three zero words.
 * Measured 14 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad: 452 of 452 bytes. That profile is documented for
 *   levels only, so this body has no boot-gate route today.
 * - rebuilt default route: 442 of 452, first differing byte +0x20; the only
 *   difference is the place of floating-point saves in the prologue.
 * - gnu-ee-trial: 420 of 452, first differing byte +0x168.
 * Profile-dependent trial: no complete-program gate, promotion or credit.
 * Sets the vertical aspect multiplier to 1, clears the two 0x118-byte camera
 * records at 0x01F61BC0, gives the first a 512 by 416 viewport, then for
 * each camera selects it and installs 10000 at 0x110, 1 at 0x10C, zero at
 * 0xF0, the identity matrix, a cleared byte at 0x116 and the default field
 * of view. It finally selects camera 0 and sets the byte at 0x116 of the
 * first camera_initialized records.
 * camera_state is the word at 0x01EDE330 that accepted sources call
 * camera_current, declared as the member of a record (see
 * CAMERA_PreUpdate__Fv); camera_initialized is int as in CAMERA_Init__Fv.c
 * and compared unsigned, as the retail loop test is. The record array has
 * no name in the symbol table. Reopen when a boot route exists for the
 * division-padding profile or its prologue order.
 */
typedef struct MATRIX4 { float m[16]; } MATRIX4;

typedef struct {
    MATRIX4 matrix;
    unsigned char unknown_40[0x80 - 0x40];
    float field_80;
    float field_84;
    float field_88;
    float field_8C;
    unsigned char unknown_90[0xF0 - 0x90];
    int field_F0;
    unsigned char unknown_F4[0x10C - 0xF4];
    float field_10C;
    float field_110;
    unsigned char field_114;
    unsigned char field_115;
    unsigned char field_116;
    unsigned char field_117;
} tCAMERA;

typedef struct {
    tCAMERA *current;
} tCAMERA_STATE;

extern tCAMERA_STATE camera_state;
extern int camera_initialized;
extern tCAMERA D_01F61BC0[2];
extern MATRIX4 g_identityMatrix;
extern float g_YAspectMultiplier;

extern void *memset(void *dest, int value, unsigned int n);
extern void CAMERA_SetCurrentCamera__FUi(unsigned int id);
extern void CAMERA_SetFov__Ff(float fov);

void CAMERA_Reset__Fv(void) {
    unsigned int i;
    unsigned int n;

    g_YAspectMultiplier = 1.0f;
    memset(D_01F61BC0, 0, sizeof(D_01F61BC0));
    D_01F61BC0[0].field_80 = 0.0f;
    D_01F61BC0[0].field_84 = 0.0f;
    D_01F61BC0[0].field_88 = 512.0f;
    D_01F61BC0[0].field_8C = 416.0f;
    for (i = 0; i < 2; i++) {
        CAMERA_SetCurrentCamera__FUi(i);
        camera_state.current->field_110 = 10000.0f;
        camera_state.current->field_10C = 1.0f;
        camera_state.current->field_F0 = 0;
        camera_state.current->matrix = g_identityMatrix;
        camera_state.current->field_116 = 0;
        CAMERA_SetFov__Ff(0.54977876f);
    }
    CAMERA_SetCurrentCamera__FUi(0);
    for (n = 0; n < (unsigned int)camera_initialized; n++)
        D_01F61BC0[n].field_116 = 1;
}