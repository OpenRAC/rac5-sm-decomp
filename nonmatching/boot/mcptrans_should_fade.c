/* Candidate only: the full-program build and compiler profile are not qualified. */
extern unsigned char fade_flag;

int MCPTRANS_ShouldFade__Fv(void) { return fade_flag; }

#ifdef RAC5_WITNESS_PADDING
/* Local spacing control; this is not a reconstructed game function. */
int RAC5_padding_sentinel(int value) { return value; }
#endif
