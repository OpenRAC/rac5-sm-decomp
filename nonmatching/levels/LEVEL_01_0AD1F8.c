/* LEVEL_01.REL:0x0AD1F8: reviewed 104-byte candidate.
 * pinned C with gnu-ee-trial links 104 bytes; first differs at +34.
 * Retry: Find a source or qualified compiler route with the retail commutative-add
 * operand order.
 * No matching credit.
 */
/* LEVEL_01.REL:0x0AD1F8: useful C candidate, no matching credit.
   Reopen when: Find a source or qualified compiler route with the retail commutative-add operand order. */
extern void func_0AD148(void *object, short left, short top,
                        short right, short bottom, int extra);

void func_0AD1F8(void *object, short x, short y,
                 short width, short height, int extra)
{
    int half_width = (unsigned short)width >> 1;
    int half_height = (unsigned short)height >> 1;
    func_0AD148(object, x - half_width, y - half_height,
                x + half_width, y + half_height, extra);
}
