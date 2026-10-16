/* QueryIntrContext 0x01ED1658..0x01ED1668 (16 bytes).
 *   mfc0 $v0, Status
 *   xori $v0, $v0, 0x1
 *   jr   $ra
 *   andi $v0, $v0, 0x1          (delay slot)
 * Reports the inverted IE bit of the CP0 Status register.
 *
 * The mfc0 is written as its literal encoding (0x40026000) on purpose: the
 * pinned assembler injects an R5900 hazard nop between a textual `mfc0` and
 * the instruction that consumes its result, and retail has no such nop. */
int QueryIntrContext(void) {
    register unsigned int status __asm__("$2");

    __asm__ __volatile__(".word 0x40026000" : "=r"(status)); /* mfc0 $2, $12 */
    return (status ^ 1) & 1;
}
