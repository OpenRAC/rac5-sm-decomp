/* LEVEL_01.REL:0x0AD1F8: reviewed 104-byte candidate, held for ABI review.
 * Draws a box centred on x/y from a half-size pair.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0AD148(void *object, short left, short top, short right, short bottom, int extra);

void func_0AD1F8(void *object, short x, short y, short width, short height, int extra){
 int hw = (unsigned short)width >> 1; int hh = (unsigned short)height >> 1; int xx = x; int yy = y;
 func_0AD148(object, xx - hw, yy - hh, hw + xx, hh + yy, extra); }
