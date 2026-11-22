/* USA LEVEL_02.REL:0x1AB888 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_027E90 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    void *res;
} Part;

typedef struct {
    char pad00[0x20];
    float dx;
    char pad24[4];
    float dz;
    char pad2C[0x1A];
    unsigned char state;
    char pad47[0xD];
    Part *part;
    char pad58[8];
    int sound;
} Obj;

typedef struct {
    char pad000[0x59C];
    int a;
    char pad5A0[0x10];
    int b;
} Cam;

extern int D_0022F770;
extern Cam D_0024C650;
extern float atan2f(float y, float x);
extern void func_1A5BB8(void);
extern void func_1A5B98(void *p);
extern void func_0285D0(int a, int b, int c);
extern void func_070D90(int a, int b);
extern void func_050E30(Cam *c, Obj *o);
extern void func_003748(int a, int b, float f, float g);
extern void func_019B20(Obj *o, int a, int b);
extern void func_027E90(int a, int b);
extern void func_018B08(void);

void func_1AB888(Obj *o)
{
    Part *p = o->part;

    if (p->res != 0) {
        func_1A5BB8();
        func_1A5B98(p->res);
    }
    if (o->sound != 0) {
        func_0285D0(D_0022F770, o->sound, 1);
    }
    if (D_0024C650.a != D_0024C650.b) {
        func_070D90(D_0024C650.a, D_0024C650.b);
    }
    func_050E30(&D_0024C650, o);
    func_003748(100, 3, atan2f(-o->dz, -o->dx), 0.0f);
    func_019B20(o, 5, 1);
    func_027E90(D_0022F770 + 1, 1);
    func_018B08();
    o->state = 2;
}
