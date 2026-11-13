/* USA FRONTEND.REL:0x002D50, 104-byte candidate.
 * Measured pinned/gnu-ee-trial: 104 linked bytes; first differing word +0xC.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct State { int pad[6]; int state; };
extern struct State *D_0010BE50;
extern int DelayThread(unsigned int usec);
void func_002D50(void)
{
    while (D_0010BE50->state != 3)
        DelayThread(800);
    D_0010BE50->state = 4;
}
