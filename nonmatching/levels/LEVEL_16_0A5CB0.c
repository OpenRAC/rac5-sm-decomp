/* USA LEVEL_16.REL:0x0A5CB0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_025BD8 unlike its accepted definition; and declares func_113698 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    char pad00[0x96C];
    Vec2 pos;
} Obj;

typedef struct {
    char pad00[0xFC8];
    int id;
} Base;

extern Base D_001E4090;
extern float D_001AA878[];
extern float D_001AA880[];
extern int D_001AA888[];
extern int D_001AA890[];
extern int D_001AA898[];
extern float D_001AAA30[];
extern float D_001AAA38[];

extern Obj *func_112CE8(int n);
extern void func_025BD8(int id);
extern int func_113680(int n);
extern int func_113698(int n);
extern int func_1136D0(int n);
extern void func_0A5F08(void);

void func_0A5CB0(int n)
{
    Vec2 p;
    float y;

    p = func_112CE8(n)->pos;
    D_001AA880[n] = p.x;
    D_001AA878[n] = p.y;
    func_025BD8(D_001E4090.id);
    func_025BD8(D_001E4090.id + 1);
    D_001AA898[n] = func_113680(n);
    D_001AA888[n] = func_113698(n);
    D_001AA890[n] = func_1136D0(n);
    if (D_001AAA30[n] != p.x || D_001AAA38[n] != p.y) {
        D_001AA880[n] = p.x;
        D_001AAA30[n] = p.x;
        D_001AA878[n] = p.y;
        y = 1.0f;
        if (p.y != 0.0f) {
            y = p.y;
        }
        D_001AA878[n] = y;
        D_001AAA38[n] = y;
        func_0A5F08();
    }
}
