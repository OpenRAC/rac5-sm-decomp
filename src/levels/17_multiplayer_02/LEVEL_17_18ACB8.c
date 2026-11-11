/* LEVEL_17:0x18ACB8 -- placement copy of FRONTEND_024958.c: copies a 8, 16 or 4 byte block between two records looked up by mode. */
extern void *func_18AC30(int, void *, int);
extern void *memcpy(void *, const void *, unsigned int);

void *func_18ACB8(int mode, void *first, void *second)
{
    void *source = func_18AC30(mode, first, 0);
    void *target = func_18AC30(mode, second, 0);
    int length;
    if (mode >= 31) {
        if (mode < 64) length = 4;
        else length = 8;
    } else length = 16;
    return memcpy(target, source, length);
}
