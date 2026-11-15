/* USA SCUS_976.15 boot: CAMERA_PreUpdate__Fv, 0x01E68828.
 * Observed body: 144 bytes; it fills its interval.
 * Measured 14 November 2026: all 144 body bytes are exact after independent
 * SN linking at the retail address under both the rebuilt default GNU route
 * and gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. For each of the two cameras: select
 * it, clear the byte at 0x114, store 10000 at 0x110 and 1 at 0x10C, then
 * apply the field of view 0.54977876.
 * camera_state is the word at 0x01EDE330 that accepted sources call
 * camera_current, declared here as the member of a record. Retail reloads
 * that pointer after each member store, including the float store; with a
 * plain pointer variable the compiler keeps it in a register (114 of 144
 * bytes). The record has one member: the counter in the next word is read
 * through its own address materialisation in CAMERA_Reset__Fv.
 */
typedef struct {
    unsigned char unknown[0x10C];
    float field_10C;
    float field_110;
    unsigned char field_114;
} tCAMERA;

typedef struct {
    tCAMERA *current;
} tCAMERA_STATE;

extern tCAMERA_STATE camera_state;

extern void CAMERA_SetCurrentCamera__FUi(unsigned int id);
extern void CAMERA_SetFov__Ff(float fov);

void CAMERA_PreUpdate__Fv(void) {
    unsigned int i;

    for (i = 0; i < 2; i++) {
        CAMERA_SetCurrentCamera__FUi(i);
        camera_state.current->field_114 = 0;
        camera_state.current->field_110 = 10000.0f;
        camera_state.current->field_10C = 1.0f;
        CAMERA_SetFov__Ff(0.54977876f);
    }
}