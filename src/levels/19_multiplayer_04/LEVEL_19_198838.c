/* LEVEL_19:0x198838 -- placement copy of FRONTEND_024958.c: copies a 8, 16 or 4 byte block between two records looked up by mode. */
extern void *func_1987B0(int, void *, int);
extern void *memcpy(void *, const void *, unsigned int);

void *func_198838(int mode, void *first, void *second)
{
    void *source = func_1987B0(mode, first, 0);
    void *target = func_1987B0(mode, second, 0);
    int length;
    if (mode >= 31) {
        if (mode < 64) length = 4;
        else length = 8;
    } else length = 16;
    return memcpy(target, source, length);
}
