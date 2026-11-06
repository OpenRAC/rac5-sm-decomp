/* FRONTEND.REL:0x00E4A8: Ghidra body 144 bytes.
 * Pinned pure C links 148 bytes and first differs at +44.
 * Recheck rectangle branch structure and the callee's argument widths. No matching credit.
 */
extern void func_00A150(int, int, short, short, long long, int);

void func_00E4A8(short left, short top, short right, short bottom, long long value)
{
    int width = right - left;
    int height;
    if (width < 0x1e1 && (height = bottom - top) < 0x111) {
        func_00A150(left, top, (short)width, (short)height, value, 0xffffff);
    } else {
        func_00A150(left, top, (short)width, (short)(bottom - top), value, 0xffffff);
    }
}
