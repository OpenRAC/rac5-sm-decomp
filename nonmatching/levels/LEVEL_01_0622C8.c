/* LEVEL_01.REL:0x0622C8: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 56 bytes; first differs at +28.
 * Retry: Recover the retail state-check branch schedule without a logically redundant
 * guard; current defined C links 56/72 bytes.
 * No matching credit.
 */
extern char D_00238F78[];
extern unsigned short D_002390D0;

int func_0622C8(int value)
{
    if (value == 0)
        return D_002390D0 == 0;
    if ((unsigned char)D_00238F78[0x158] == value)
        return D_00238F78[0x159] == 0;
    return 0;
}
