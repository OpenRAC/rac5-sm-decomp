/*
 * USA boot candidate at 0x01E92AA0; named body extent 12 bytes, followed by
 * one zero word. This C body compared exactly in a local SN link using
 * reconstructed GNU pinned and gnu-ee-trial compilers with -O2 -G0. Those
 * tools are not a qualified project toolchain; this is not an accepted match.
 * Promotion requires the qualified complete boot gate and semantic boundary
 * review. The longer next-label interval contains other candidate entries;
 * its boundaries and any indirect entry paths remain subject to review.
 *
 * Sets the observed ATRAC-instance byte at offset 0x7A.
 */
typedef struct {
    char _pad00[0x7A];
    unsigned char field7A;
    char _pad7B;
} ATRACInstance;

void SND_StopATRACInstance__FP13ATRACInstance(ATRACInstance *instance)
{
    instance->field7A = 1;
}
