/* LEVEL_16.REL:0x11E188: reviewed 180-byte candidate, held for ABI review.
 * Resets a display state, sets a clear/window setup and runs two helpers.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_09AC30 returning void with (int, int, int, int, float,
 * float, float, int, int, int, int), but the accepted LEVEL_16_09AC30.c
 * defines it returning void with (float, float, float, int, int, int, int,
 * int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002E1590[];

void func_09AC30(int a0, int a1, int a2, int a3, float f12, float f13, float f14,
                 unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3);
void func_11DC90(char *a0, int a1, int a2, int a3);
void func_09D198(char *a0, unsigned int a1, float f12);
void func_0A94B0(char *a0);

void func_11E188(char *a0, char *a1, int a2)
{
    func_09AC30(0, 0, 0x1E0, 0x110, 1.0f, 1.0f, 0.0f,
                0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11DC90(a0, a2, 1, 0);
    func_09D198(a1, 0xFFFFFFFFu, 0.0f);
    func_0A94B0(D_002E1590);
}
