/* Candidate for LEVEL_19.REL:0x09A4C0.
 * Turns rectangle corners into a center and signed dimensions.
 */
extern void func_09A538(float scale_x, float scale_y, float scale_z,
                        short center_x, short center_y, short width,
                        short height, unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);

void func_09A4C0(float scale_x, float scale_y, float scale_z,
                 short left, short top, short right, short bottom,
                 unsigned int arg8, unsigned int arg9,
                 unsigned int arg10, unsigned int arg11)
{
    short width = right - left + 1;
    short height = bottom - top + 1;
    short center_x = left + (width >> 1);
    short center_y = top + (height >> 1);
    func_09A538(scale_x, scale_y, scale_z, center_x, center_y,
                width, height, arg8, arg9, arg10, arg11);
}
