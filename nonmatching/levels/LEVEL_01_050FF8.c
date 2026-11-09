/* LEVEL_01.REL:0x050FF8: reviewed 208-byte candidate, held for ABI review.
 * Sets up several parameters from a global object's fields.
 * gnu-ee-trial C with gnu-ee-trial links 208/208 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It declares func_0036E8 returning void with (int, int, float, float), but
 * the accepted LEVEL_01_0036E8.c defines it returning void with (pointer,
 * pointer).
 * It declares func_003718 returning void with (int, int, float, float), but
 * the accepted LEVEL_01_003718.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x28];
    float f28;
    float f2C;
    float f30;
    float f34;
} S050FF8;

typedef struct {
    char pad0[0x54];
    S050FF8 *p54;
} G050FF8;

extern G050FF8 *D_00238CE8;
extern void func_03BE20(void);
extern void func_0033D0(float a, float b);
extern void func_0036E8(int a, int b, float x, float y);
extern void func_003718(int a, int b, float x, float y);
extern void func_003748(int a, int b, float x, float y);
extern void func_003888(int a, int b, float x, float y);
extern void func_003B48(float a);
extern void func_003BA0(int a);
extern void func_0033A8(int a);
extern void func_0033E8(int a, int b, int c);

void func_050FF8(void)
{
    S050FF8 *s = D_00238CE8->p54;
    func_03BE20();
    func_0033D0(0.0f, 0.0f);
    func_0036E8(10, 0, s->f2C, 0.15f);
    func_003718(10, 0, s->f30, 0.15f);
    func_003748(10, 0, s->f28, 0.15f);
    func_003888(10, 0, s->f34, 0.15f);
    func_003B48(0.0f);
    func_003BA0(0);
    func_0033A8(0);
    func_0033E8(0, 1, 1);
}
