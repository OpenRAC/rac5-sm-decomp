/* LEVEL_04:0x204D90 -- placement copy of FRONTEND_024958.c: copies a 8, 16 or 4 byte block between two records looked up by mode. */
extern void *func_204D08(int, void *, int);
extern void *memcpy(void *, const void *, unsigned int);

void *func_204D90(int mode, void *first, void *second)
{
    void *source = func_204D08(mode, first, 0);
    void *target = func_204D08(mode, second, 0);
    int length;
    if (mode >= 31) {
        if (mode < 64) length = 4;
        else length = 8;
    } else length = 16;
    return memcpy(target, source, length);
}
