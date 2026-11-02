extern int camera_initialized;
extern void CAMERA_Reset__Fv(void);

void CAMERA_Init__Fv(void) {
    camera_initialized = 1;
    CAMERA_Reset__Fv();
}
