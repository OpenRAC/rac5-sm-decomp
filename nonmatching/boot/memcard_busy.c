/* Candidate only: the full-program build and compiler profile are not qualified. */
extern int busy_state;

int MEMCARD_Busy__Fv(void) { return busy_state != 0; }

#ifdef RAC5_WITNESS_PADDING
/* Local spacing control; this is not a reconstructed game function. */
int RAC5_padding_sentinel(int value) { return value; }
#endif
