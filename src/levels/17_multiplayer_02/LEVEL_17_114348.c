/* LEVEL_17:0x114348 -- placement copy of LEVEL_16_114BB8.c: picks a usable slot index, randomly or as the one farthest from two objects. */
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
extern int func_1125F8(void);
extern int func_114550(Obj *a, int i);
extern Obj *func_112478(unsigned int j);
extern int D_002D0C60;
extern Slot D_002D0988[];
extern float D_001C2CDC;

int func_114348(Obj *a)
{
    unsigned int i;
    int r;
    int best = 0xFABCED00;
    unsigned int j;
    float bestd = -1.0f;
    float d;

    if (func_1125F8()) {
        int n;
        n = D_002D0C60;
        r = n != 0 ? rand() % n : 0;
        while (func_114550(a, r) == 0) {
            n = D_002D0C60;
            r = n != 0 ? rand() % n : 0;
        }
        return r;
    }
    for (i = 0; i < D_002D0C60; i++) {
        Slot *e;
        float *pz;
        if (func_114550(a, i) == 0)
            continue;
        d = D_001C2CDC;
        e = &D_002D0988[i];
        pz = &e->x;
        for (j = 0; j < 2; j++) {
            Obj *o = func_112478(j);
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
