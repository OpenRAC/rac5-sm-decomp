/* LEVEL_04:0x1D61E0 -- finds the listed entry in state 2 or 3 nearest to the given point in the ground plane, stores the squared distance through the optional pointer and returns the entry (0 when none). */
typedef struct Entry {
    char pad00[0x30];
    float x;
    float y;
    float z;
    char pad3C[0x45 - 0x3C];
    unsigned char state;
} Entry;

typedef struct List {
    char pad00[0x40];
    Entry *entries[1];
} List;

typedef struct Model {
    char pad00[0x48];
    unsigned char count;
} Model;

typedef struct Obj {
    char pad00[0x54];
    List *list;
    Model *model;
} Obj;

Entry *func_1D61E0(Obj *object, float *pos, float *out_dist)
{
    unsigned int i;
    List *list;
    Entry *best;
    Entry *e;
    float best_dist;
    float dx;
    float dz;
    float d;

    best = 0;
    best_dist = 1.0000000150474662e+30f;
    list = object->list;
    for (i = 0; i < object->model->count; i++) {
        e = list->entries[i];
        if ((unsigned int)(e->state - 2) < 2) {
            dx = e->x - pos[0];
            dz = e->z - pos[2];
            d = dx * dx + dz * dz;
            if (d < best_dist) {
                best_dist = d;
                best = e;
            }
        }
    }
    if (out_dist != 0) {
        *out_dist = best_dist;
    }
    return best;
}
