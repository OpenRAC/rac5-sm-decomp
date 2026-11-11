/* LEVEL_19:0x115360 -- placement copy of LEVEL_16_114BB8.c: picks a usable slot index, randomly or as the one farthest from two objects. */
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
extern int func_113610(void);
extern int func_115568(Obj *a, int i);
extern Obj *func_113490(unsigned int j);
extern int D_002DFAE0;
extern Slot D_002DF808[];
extern float D_001D0A5C;

int func_115360(Obj *a)
{
    unsigned int i;
    int r;
    int best = 0xFABCED00;
    unsigned int j;
    float bestd = -1.0f;
    float d;

    if (func_113610()) {
        int n;
        n = D_002DFAE0;
        r = n != 0 ? rand() % n : 0;
        while (func_115568(a, r) == 0) {
            n = D_002DFAE0;
            r = n != 0 ? rand() % n : 0;
        }
        return r;
    }
    for (i = 0; i < D_002DFAE0; i++) {
        Slot *e;
        float *pz;
        if (func_115568(a, i) == 0)
            continue;
        d = D_001D0A5C;
        e = &D_002DF808[i];
        pz = &e->x;
        for (j = 0; j < 2; j++) {
            Obj *o = func_113490(j);
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
