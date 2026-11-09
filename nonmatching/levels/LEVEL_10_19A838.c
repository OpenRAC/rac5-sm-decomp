/* LEVEL_10.REL:0x19A838: reviewed 512-byte candidate, held for ABI review.
 * Ramps an attached effect in or out, spawning it on demand and updating its
 * scale.
 * gnu-ee-trial C with gnu-ee-trial links 512/512 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_1B21A0 returning void with (int, int), but the accepted
 * LEVEL_10_1B21A0.c defines it returning void with (pointer, int).
 * It declares func_081168 returning void with (int), but the accepted
 * LEVEL_10_081168.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Hook {
    unsigned char pad0[0x14];
    float a;
    float b;
    float c;
    float d;
} Hook;

typedef struct Node {
    unsigned char pad0[0x1C];
    int w1C;
    unsigned char pad20[8];
    int w28;
    int w2C;
    unsigned char pad30[4];
    float f34;
    unsigned char pad38[0x114];
    int w14C;
} Node;

typedef struct Obj {
    unsigned char pad0[0x45];
    unsigned char b45;
    unsigned char pad46[0x12];
    Node *node;
} Obj;

extern Hook *D_003A02EC;
extern Hook *D_003A02F4;
extern char D_0022DD40[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_081000(Obj *o, Hook *h, void *a, int b, int c, int d, int e, int f,
                        float g, float h2, float i, float j);
extern int func_1B20A0(Obj *o, char *p, int a);
extern void func_1B21A0(int a, int b);
extern void func_081168(int a);
extern void func_07CCA0(int a, int b);
extern void func_1B21B0(int a, Vec3 *v);

void func_19A838(Obj *o)
{
    Node *n;
    int act;
    Vec3 w;
    Vec3 v;
    void *fx;

    n = o->node;
    act = 0;
    if ((unsigned int)(n->w1C - 2) < 2) {
        act = o->b45 != 5;
    }
    if (act) {
        if (n->w28 == 0) {
            fx = &n->w14C;
            if (D_003A02EC) {
                func_081000(o, D_003A02EC, fx, 0, 0, 0, 0, 1,
                            D_003A02EC->a, D_003A02EC->b, D_003A02EC->c, D_003A02EC->d);
            }
            n->w28 = func_1B20A0(o, D_0022DD40, 2);
            if (n->w28 == 0) {
                return;
            }
            func_1B21A0(n->w28, n->w2C);
            if (n->w28 == 0) {
                return;
            }
        }
        n->f34 += 0.083333336f;
        if (n->f34 > 1.5f) {
            n->f34 = 1.5f;
        }
    } else {
        if (n->w28 == 0) {
            return;
        }
        n->f34 -= 0.083333336f;
        if (n->f34 <= 0.1f) {
            func_081168(n->w14C);
            if (D_003A02F4) {
                func_081000(o, D_003A02F4, 0, 0, 0, 0, 0, 1,
                            D_003A02F4->a, D_003A02F4->b, D_003A02F4->c, D_003A02F4->d);
            }
            func_07CCA0(n->w28, 1);
            n->f34 = 0.1f;
            n->w28 = 0;
        }
    }
    if (n->w28) {
        memset(&v, 0, sizeof(Vec3));
        v.x = n->f34 * 0.75f;
        v.y = n->f34;
        v.z = n->f34 * 0.75f;
        w = v;
        func_1B21B0(n->w28, &w);
    }
}
