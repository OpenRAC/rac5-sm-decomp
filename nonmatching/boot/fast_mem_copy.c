/* Candidate only: the full-program build and compiler profile are not qualified. */
extern void *memcpy(void *destination, const void *source, unsigned int size);

void *FastMemCopy__FPvPCvUi(void *destination, const void *source,
                             unsigned int units) {
    return memcpy(destination, source, units << 4);
}

#ifdef RAC5_WITNESS_PADDING
/* Local spacing control; this is not a reconstructed game function. */
int RAC5_padding_sentinel(int value) { return value; }
#endif
