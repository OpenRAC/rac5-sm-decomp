/* USA LEVEL_01.REL:0x026FE0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller
 * ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo_LEVEL_01; and is defined
 * unlike the declaration in the accepted caller LEVEL_01_017D80.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void *memcpy(void *dst, const void *src, unsigned int n);

void *func_026FE0(void *dst, const void *src, int count)
{
    return memcpy(dst, src, count << 4);
}
