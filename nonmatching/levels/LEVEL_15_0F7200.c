/* LEVEL_15.REL:0x0F7200: reviewed 412-byte candidate, held for ABI review.
 * Accumulates a scaled timer in one of three fields and emits whole units.
 * gnu-ee-trial C with r5900-mfc1 links 412/412 bytes and is byte-exact at this
 * and 1 other USA placement, but the prototypes disagree.
 * It declares func_0977A0 returning void with (float), but the accepted
 * LEVEL_15_0977A0.c defines it returning void with no arguments.
 * It declares func_097898 returning void with (int), but the accepted
 * LEVEL_15_097898.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x4413C];
    float f413C;
    char pad40[0x10 - 4];
    float f414C;
    float f4150;
    float f4154;
} Q;
extern Q D_002A8B58;
extern float D_0016F338;
extern float D_0016F340;
extern void func_0977A0(float f);
extern void func_137248(int n);
extern void func_03E948(int n);
extern void func_097898(int n);
extern void func_137288(int n);

void func_0F7200(int type, int count)
{
    int n;
    float fn;
    float t;

    switch (type) {
    case 0:
        D_002A8B58.f414C = D_002A8B58.f414C + (float)count * D_0016F338;
        n = (int)D_002A8B58.f414C;
        fn = (float)n;
        func_0977A0(D_002A8B58.f414C - fn);
        if (n > 0) {
            func_137248(n);
            D_002A8B58.f414C = D_002A8B58.f414C - fn;
        }
        break;
    case 1:
        t = D_002A8B58.f4150 + (float)count * D_002A8B58.f413C;
        n = (int)t;
        D_002A8B58.f4150 = t;
        if (n > 0) {
            func_03E948(n);
            D_002A8B58.f4150 = D_002A8B58.f4150 - (float)n;
        }
        break;
    case 2:
        D_002A8B58.f4154 = D_002A8B58.f4154 + (float)count * D_0016F340;
        n = (int)D_002A8B58.f4154;
        func_097898(0x5A);
        if (n > 0) {
            func_137288(n);
            D_002A8B58.f4154 = D_002A8B58.f4154 - (float)n;
        }
        break;
    }
}
