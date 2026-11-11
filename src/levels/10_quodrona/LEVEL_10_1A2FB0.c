/* LEVEL_10:0x1A2FB0 -- placement copy of LEVEL_01_19B338.c: resets the object's state bytes, clears its 12-byte data block, sets the two marker bytes and the all-ones word, then looks up a global sound once and sets the fallback flag when it is missing; reports success. */
extern void *memset(void *, int, unsigned int);
extern int GLOBALWAD_FindGlobalSound__FUi(unsigned int id);
extern int D_00211878;
extern unsigned char D_0021187C;

int func_1A2FB0(char *obj)
{
    *(unsigned char *)(obj + 0x45) = 0;
    *(unsigned char *)(obj + 0x46) = 3;
    memset(*(void **)(obj + 0x58), 0, 0xC);
    *(unsigned char *)(obj + 0x77) = 0x20;
    *(unsigned int *)(obj + 0x68) = 0xFFFFFFFFu;
    *(unsigned char *)(obj + 0x76) = 0x20;
    if (D_00211878 == 0) {
        D_00211878 = GLOBALWAD_FindGlobalSound__FUi(0xBD506DCCu);
        if (D_00211878 == 0) {
            if (D_0021187C == 0) {
                D_0021187C = 1;
            }
        }
    }
    return 1;
}
