/* LEVEL_01.REL:0x108B08: reviewed 108-byte candidate.
 * pinned C with gnu-ee-trial links 108 bytes; first differs at +48.
 * Retry: Find the original argument-evaluation order that schedules the third call
 * argument before the last flag OR.
 * No matching credit.
 */
extern void func_096948(void *buffer, unsigned int flags, int a, int b,
                        int c, int d, int e);
extern void func_096B20(void *buffer);
void func_108B08(int a, int b, int c, int d, int e, int f, int g, int h)
{
    char buffer[16];
    unsigned int flags = a << 27;
    unsigned int middle;
    flags |= b << 16;
    flags |= c << 15;
    flags |= d << 14;
    middle = (e << 10) | 0x2000;
    flags |= middle;
    flags |= f << 6;
    flags |= 0x21;
    func_096948(buffer, flags, g, 0x14, 0, -1, h);
    func_096B20(buffer);
}


