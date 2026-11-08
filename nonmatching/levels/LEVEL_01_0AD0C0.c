/* LEVEL_01.REL:0x0AD0C0: reviewed 132-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +26.
 * Retry: Find a qualified source/type form that preserves the retail order of
 * operands in both upper-coordinate additions; retain the original upper-Y
 * calculation.
 * No matching credit.
 */
extern void func_0ACF28(void *, short, short, short, short,
                        int, int, int, int, int);

void func_0AD0C0(void *context, short x, short y,
                 unsigned short width, unsigned short height,
                 unsigned short arg5, unsigned short arg6,
                 unsigned short arg7, unsigned short arg8, int arg9)
{
    int half_width = width >> 1;
    int half_height = height >> 1;

    func_0ACF28(context, (short)(x - half_width),
                (short)(y - half_height), (short)(half_width + x),
                (short)(half_width + y), arg5, arg6, arg7, arg8, arg9);
}
