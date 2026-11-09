/* LEVEL_04.REL:0x031F90: reviewed 328-byte candidate, held for ABI review.
 * Sets up the fixed fog/light parameter sequence for an object, with the
 * channel count chosen by a flag.
 * gnu-ee-trial C with gnu-ee-trial links 328/328 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_03D7D8 returning void with (int), but the accepted
 * LEVEL_04_03D7D8.c defines it returning void with (pointer).
 * It declares func_003520 returning void with (int, int, float, float), but
 * the accepted LEVEL_04_003520.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj {
    char pad_00[0x20];
    float v_20[4];
    float v_30[4];
};

extern void func_03D7D8(int a);
extern void func_03DB20(int a);
extern void func_0031D8(float a, float b);
extern void func_003520(int a, int b, float f, float g);
extern void func_0036C0(float *p, int a, int b, float f);
extern void func_003640(float f, float g, int a, int b);
extern void func_003690(float f, float g, int a, int b);
extern void func_0034F0(int a, int b, float f, float g);
extern void func_002F78(float *p, int a, float f);
extern void func_0031F0(int a, int b, int c);
extern void func_003950(float a, float b);
extern void func_003968(float a);
extern void func_019E18(float *p);

void func_031F90(struct Obj *o, int flag)
{
    int n;

    func_03D7D8(1);
    func_03DB20(0);
    func_0031D8(0.0f, 0.0f);
    n = flag ? 3 : 0;
    func_003520(10, n, 2.25f, 1.0f);
    func_0036C0(o->v_20, 10, n, 0.3f);
    func_003640(0.0f, 1.0f, 10, n);
    func_003690(0.5f, 1.0f, 10, n);
    func_0034F0(10, n, 5.0f, 1.0f);
    func_002F78(o->v_30, 0, 0.0f);
    func_0031F0(1, 0, 1);
    func_003950(0.5f, 0.1f);
    func_003968(2.0f);
    func_019E18(o->v_30);
}
