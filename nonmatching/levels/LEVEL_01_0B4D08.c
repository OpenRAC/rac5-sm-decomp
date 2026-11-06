/* LEVEL_01.REL:0x0B4D08, bounded 104-byte candidate.
 * Isolated pinned C object: 112 bytes; first linked
 * difference at body byte +8. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail takes beqz with addiu in the delay slot; GCC emits beql with the next block's lui in the delay slot. Reopen by introducing a pointer dependency before the branch.
 */
extern int D_001FC364;
extern int D_001FC368;

void func_000B4D08(void)
{
    if (D_001FC364 != 0) {
        D_001FC364--;
    }
    if (D_001FC364 == 0) {
        D_001FC368 -= 8;
    } else {
        D_001FC368 += 8;
    }
    if (D_001FC368 > 0xFF) {
        D_001FC368 = 0xFF;
    }
    if (D_001FC368 < 0) {
        D_001FC368 = 0;
    }
}
