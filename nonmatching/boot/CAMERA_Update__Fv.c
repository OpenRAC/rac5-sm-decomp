/* USA SCUS_976.15 boot: CAMERA_Update__Fv, 0x01E688B8.
 * Observed body: 444 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 444 body bytes are exact after independent
 * SN linking at the retail address under both the rebuilt default GNU route
 * and gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. For each initialized camera: select
 * it, run its two camera systems (each calls its selected update function
 * with its two float outputs), copy the active system's matrix into the
 * camera, set the two flag bytes and apply the values the system returned.
 * camera_state is the word at 0x01EDE330 that accepted sources call
 * camera_current, declared as the member of a record so that it is reloaded
 * after member stores, as retail does (see CAMERA_PreUpdate__Fv). The active
 * system has its own pointer variable, distinct from the loop's; the two
 * flag bytes go through one pointer value and retail emits them in the
 * opposite order to the source. Record and field names are descriptive
 * placeholders; only the fields this body touches are declared.
 */
typedef struct MATRIX4 { float m[16]; } MATRIX4;
typedef MATRIX4 *CameraUpdateFn(float *x, float *y, int system, void *context);

typedef struct CameraSystemEntry {
    CameraUpdateFn *update;
    void *context;
} CameraSystemEntry;

typedef struct CameraSystem {
    CameraSystemEntry entries[4];
    int selected;
    MATRIX4 *result;
    float x;
    float y;
} CameraSystem;

typedef struct tCAMERA {
    MATRIX4 matrix;
    unsigned char pad40[0x90 - 0x40];
    CameraSystem systems[2];
    int active_system;
    float fF4;
    float fF8;
    unsigned char padFC[0x114 - 0xFC];
    unsigned char f114;
    unsigned char f115;
} tCAMERA;

typedef struct { tCAMERA *current; } tCAMERA_STATE;
extern tCAMERA_STATE camera_state;
extern unsigned int camera_initialized;

extern void CAMERA_SetCurrentCamera__FUi(unsigned int id);
extern void CAMERA_SetFovX__Ff(float fov);
extern void CAMERA_StoreThisFrameLastUpdatedFov__Fv(void);

void CAMERA_Update__Fv(void) {
    unsigned int i;
    int j;
    CameraSystem *system;
    CameraSystemEntry *entry;
    CameraSystem *active;
    tCAMERA *camera;

    for (i = 0; i < camera_initialized; i++) {
        CAMERA_SetCurrentCamera__FUi(i);
        for (j = 0; j < 2; j++) {
            system = &camera_state.current->systems[j];
            system->x = camera_state.current->fF4;
            system->y = camera_state.current->fF8;
            entry = &system->entries[system->selected];
            if (entry->update)
                system->result = entry->update(&system->x, &system->y, j, entry->context);
            else
                system->result = 0;
        }
        active = &camera_state.current->systems[camera_state.current->active_system];
        camera_state.current->matrix = *active->result;
        camera = camera_state.current;
        camera->f115 = 1;
        camera->f114 = 1;
        CAMERA_SetFovX__Ff(active->x);
        camera_state.current->fF8 = active->y;
        CAMERA_StoreThisFrameLastUpdatedFov__Fv();
    }
}
