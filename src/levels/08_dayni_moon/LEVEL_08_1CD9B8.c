/* LEVEL_08:0x1CD9B8 -- placement copy of LEVEL_01_19B338.c: resets the object's state bytes, clears its 12-byte data block, sets the two marker bytes and the all-ones word, then looks up a global sound once and sets the fallback flag when it is missing; reports success. */
extern void *memset(void *, int, unsigned int);
extern int GLOBALWAD_FindGlobalSound__FUi(unsigned int id);
extern int D_002520E0;
extern unsigned char D_002520E4;

int func_1CD9B8(char *obj)
{
    *(unsigned char *)(obj + 0x45) = 0;
    *(unsigned char *)(obj + 0x46) = 3;
    memset(*(void **)(obj + 0x58), 0, 0xC);
    *(unsigned char *)(obj + 0x77) = 0x20;
    *(unsigned int *)(obj + 0x68) = 0xFFFFFFFFu;
    *(unsigned char *)(obj + 0x76) = 0x20;
    if (D_002520E0 == 0) {
        D_002520E0 = GLOBALWAD_FindGlobalSound__FUi(0xBD506DCCu);
        if (D_002520E0 == 0) {
            if (D_002520E4 == 0) {
                D_002520E4 = 1;
            }
        }
    }
    return 1;
}
