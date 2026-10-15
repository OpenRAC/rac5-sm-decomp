/* Candidate only: the full-program build and compiler profile are not qualified. */
extern int ps2fioRead(int handle, void *buffer, unsigned int size);

int higIoRead__FiPvUi(int handle, void *buffer, unsigned int size) {
    return ps2fioRead(handle, buffer, size);
}

#ifdef RAC5_WITNESS_PADDING
/* Local spacing control; this is not a reconstructed game function. */
int RAC5_padding_sentinel(int value) { return value; }
#endif
