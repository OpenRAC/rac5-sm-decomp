/* Boot-only match under the pinned compiler and complete load-image gate. */
extern int busy_state;

int MEMCARD_Busy__Fv(void) { return busy_state != 0; }

#ifdef RAC5_WITNESS_PADDING
/* Local spacing control; this is not a reconstructed game function. */
int RAC5_padding_sentinel(int value) { return value; }
#endif
