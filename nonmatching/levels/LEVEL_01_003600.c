/* LEVEL_01.REL:0x003600: reviewed 232-byte candidate, held for ABI review.
 * Wraps an angle to one turn, updates flag bits, then forwards to the setter.
 * gnu-ee-trial C with gnu-ee-trial links 232/232 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int, int, float, float), but
 * the accepted caller LEVEL_01_0038B8.c declares it returning void with
 * (float, pointer, float, pointer).
 * It defines the function returning void with (int, int, float, float), but
 * the accepted caller LEVEL_01_003748.c declares it returning void with (int,
 * float, float, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float floorf(float x);
struct Ctx { char pad[0x40]; unsigned long long flags; char pad48[0x58]; char sub[1]; };
extern struct Ctx *D_001EF254;
extern void func_0035D0(char *sub, int a, float x, float y, int b);
void func_003600(int a, int b, float x, float y)
{
    float t = x - floorf(x * 0.15915493667125702f + 0.5f) * 6.2831854820251465f;
    if (b != 2) {
        D_001EF254->flags &= ~0x100000LL;
        D_001EF254->flags &= ~0x80000LL;
    }
    if ((unsigned char)(D_001EF254->flags >> 15) & 1) {
        b = 3;
        D_001EF254->flags |= 0x10000LL;
    }
    func_0035D0(D_001EF254->sub, a, t, y, b);
}
