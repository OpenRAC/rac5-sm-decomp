/* LEVEL_16.REL:0x114BB8: reviewed 452-byte candidate, held for ABI review.
 * Picks a usable slot index, randomly or as the one farthest from two objects.
 * gnu-ee-trial C with gnu-ee-trial links 452/452 bytes and is byte-exact at
 * this and 4 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_16_114D80.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Obj {
    char pad[0x30];
    float x;
    float pad1;
    float z;
    char pad2[0xF4 - 0x3C];
    int active;
} Obj;

typedef struct Slot {
    char pad[0x30];
    float x;
    float pad1;
    float z;
    char tail[0x48 - 0x3C];
} Slot;

extern int rand(void);
extern int func_112E68(void);
extern int func_114DC0(Obj *a, int i);
extern Obj *func_112CE8(unsigned int j);
extern int D_002DF960;
extern Slot D_002DF688[];
extern float D_001CF85C;

int func_114BB8(Obj *a)
{
    unsigned int i;
    int r;
    int best = 0xFABCED00;
    unsigned int j;
    float bestd = -1.0f;
    float d;

    if (func_112E68()) {
        int n;
        n = D_002DF960;
        r = n != 0 ? rand() % n : 0;
        while (func_114DC0(a, r) == 0) {
            n = D_002DF960;
            r = n != 0 ? rand() % n : 0;
        }
        return r;
    }
    for (i = 0; i < D_002DF960; i++) {
        Slot *e;
        float *pz;
        if (func_114DC0(a, i) == 0)
            continue;
        d = D_001CF85C;
        e = &D_002DF688[i];
        pz = &e->x;
        for (j = 0; j < 2; j++) {
            Obj *o = func_112CE8(j);
            if (o != 0 && o->active != 0 && o != a) {
                float dx = e->x - o->x;
                float dz = pz[2] - o->z;
                float dd = dx * dx + dz * dz;
                if (dd < d)
                    d = dd;
            }
        }
        if (bestd < d) {
            bestd = d;
            best = i;
        }
    }
    return best;
}
