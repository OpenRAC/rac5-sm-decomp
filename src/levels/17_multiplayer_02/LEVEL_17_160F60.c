/* LEVEL_17:0x160F60 -- placement copy of LEVEL_16_16A7C0.c: resets the object's state bytes, clears its 12-byte data block, sets the marker byte and the all-ones word, then looks up a global sound once and sets the fallback flag when it is missing; reports success. */
extern void *memset(void *, int, unsigned int);
extern int GLOBALWAD_FindGlobalSound__FUi(unsigned int id);
extern int D_001B15D0;
extern unsigned char D_001B15D4;

int func_160F60(char *obj)
{
    *(unsigned char *)(obj + 0x45) = 0;
    *(unsigned char *)(obj + 0x46) = 3;
    memset(*(void **)(obj + 0x58), 0, 0xC);
    *(unsigned char *)(obj + 0x77) = 0x20;
    *(unsigned int *)(obj + 0x68) = 0xFFFFFFFFu;
    if (D_001B15D0 == 0) {
        D_001B15D0 = GLOBALWAD_FindGlobalSound__FUi(0xBD506DCCu);
        if (D_001B15D0 == 0) {
            if (D_001B15D4 == 0) {
                D_001B15D4 = 1;
            }
        }
    }
    return 1;
}
