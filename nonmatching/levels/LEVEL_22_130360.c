/* LEVEL_22.REL:0x130360: reviewed 180-byte candidate, held for ABI review.
 * Counts down a timer field, calls two helpers when a flag is set, and
 * dispatches on zero.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_094618 returning int with (int), but the accepted
 * LEVEL_22_094618.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_0AA7E0(int a0);
void func_0945E0(int a0, unsigned int a1, int a2, int a3, int t0, int t1);
void func_0571F8(float f12);
int func_094618(int a0);
void func_12FE00(char *obj, unsigned char a1, int a2);

void func_130360(char *obj)
{
    char *s0;

    s0 = *(char **)(obj + 0x58);
    func_0AA7E0(0x16);
    func_0945E0(0, 0xFF000000u, 0x20, 0x20, 3, 0);
    if ((unsigned int)(*(unsigned char *)(s0 + 0xAC) - 2) < 2) {
        func_0571F8(0.0f);
    }
    *(float *)(obj + 0x70) = *(float *)(obj + 0x70) - 1.0f;
    if (!(*(float *)(obj + 0x70) <= 0.0f)) {
        if (func_094618(0) == 0) {
            return;
        }
    }
    func_12FE00(obj, *(unsigned char *)(obj + 0x45), 7);
}
