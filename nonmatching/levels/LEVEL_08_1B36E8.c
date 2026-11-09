/* LEVEL_08.REL:0x1B36E8: reviewed 236-byte candidate, held for ABI review.
 * Sets up a series of effect parameters for an object.
 * gnu-ee-trial C with gnu-ee-trial links 236/236 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_040EE0 returning void with (int), but the accepted
 * LEVEL_08_040EE0.c defines it returning void with (pointer).
 * It declares func_003C08 returning void with (int), but the accepted
 * LEVEL_08_003C08.c defines it returning void with (long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_040EE0(int a);
extern void func_003400(float a, float b);
extern void func_003C58(void);
extern void func_003C08(int a);
extern void func_003190(int a, float b, int c);
extern void func_003718(float a, float b, int c, int d);
extern void func_003748(float a, float b, int c, int d);
extern void func_0038B8(float a, float b, int c, int d);
extern void func_003778(float a, float b, int c, int d);
extern void func_003868(float a, float b, int c, int d);

void func_1B36E8(int obj)
{
    func_040EE0(1);
    func_003400(0.0f, 0.0f);
    func_003C58();
    func_003C08(0);
    func_003190(obj, 0.0f, 1);
    func_003718(13.0f, 1.0f, 100, 3);
    func_003748(2.0f, 1.0f, 100, 3);
    func_0038B8(0.8625f, 1.0f, 100, 3);
    func_003778(1.5707964f, 1.0f, 100, 3);
    func_003868(0.0f, 1.0f, 100, 3);
}
