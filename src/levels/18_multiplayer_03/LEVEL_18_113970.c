/* LEVEL_18:0x113970 -- placement copy of LEVEL_16_114BB8.c: picks a usable slot index, randomly or as the one farthest from two objects. */
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
extern int func_111C20(void);
extern int func_113B78(Obj *a, int i);
extern Obj *func_111AA0(unsigned int j);
extern int D_002DFCE0;
extern Slot D_002DFA08[];
extern float D_001D0DDC;

int func_113970(Obj *a)
{
    unsigned int i;
    int r;
    int best = 0xFABCED00;
    unsigned int j;
    float bestd = -1.0f;
    float d;

    if (func_111C20()) {
        int n;
        n = D_002DFCE0;
        r = n != 0 ? rand() % n : 0;
        while (func_113B78(a, r) == 0) {
            n = D_002DFCE0;
            r = n != 0 ? rand() % n : 0;
        }
        return r;
    }
    for (i = 0; i < D_002DFCE0; i++) {
        Slot *e;
        float *pz;
        if (func_113B78(a, i) == 0)
            continue;
        d = D_001D0DDC;
        e = &D_002DFA08[i];
        pz = &e->x;
        for (j = 0; j < 2; j++) {
            Obj *o = func_111AA0(j);
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
