/* Candidate only: the full-program build and compiler profile are not qualified. */
extern int camera_initialized;
extern void CAMERA_Reset__Fv(void);

void CAMERA_Init__Fv(void) {
    camera_initialized = 1;
    CAMERA_Reset__Fv();
}

#ifdef RAC5_WITNESS_PADDING
/* Local spacing control; this is not a reconstructed game function. */
int RAC5_padding_sentinel(int value) { return value; }
#endif
