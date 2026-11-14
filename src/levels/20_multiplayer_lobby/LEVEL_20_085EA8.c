/* LEVEL_20:0x085EA8 -- placement copy of LEVEL_01_0AD0C0.c: forwards a rectangle given by centre and size as corner coordinates, together with the remaining parameters. */
extern void func_085D10(void *, short, short, short, short,
                        int, int, int, int, int);

void func_085EA8(void *context, short x, short y,
                 unsigned short width, unsigned short height,
                 unsigned short arg5, unsigned short arg6,
                 unsigned short arg7, unsigned short arg8, int arg9)
{
    short half_width = width >> 1;
    short half_height = height >> 1;

    func_085D10(context, (short)(x - half_width),
                (short)(y - half_height), (short)(half_width + x),
                (short)(half_width + y), arg5, arg6, arg7, arg8, arg9);
}
