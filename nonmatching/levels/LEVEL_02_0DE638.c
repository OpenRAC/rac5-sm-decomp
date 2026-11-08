/* LEVEL_02.REL:0x0DE638: reviewed 76-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +28.
 * Retry: Recover the extra result-register transfer after equality normalization;
 * three controlled C flow variants and all qualified cc1 routes link four bytes
 * short.
 * No matching credit.
 */
extern unsigned int func_0DE2B0(void);
extern unsigned int D_0021B6FC;

int func_0DE638(int value)
{
    int result = 0;
    if (func_0DE2B0() != 0)
        result = D_0021B6FC == value;
    return result;
}
