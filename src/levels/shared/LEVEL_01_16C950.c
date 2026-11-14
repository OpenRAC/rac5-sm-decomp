/* LEVEL_01:0x16C950 -- returns 1 when at least two other entries of the object's table lie within 4.0 units of the selected entry, else 0. */
typedef struct {
    char pad00[0x30];
    float x;
    float y;
    float z;
} Ent;

typedef struct {
    Ent *ent;
    char pad04[0x18];
} Slot;

typedef struct {
    char pad00[0x58];
    Slot *slots;
} Obj;

int func_16C950(Obj *o, unsigned int index)
{
    Slot *slots = o->slots;
    unsigned int count = 0;
    unsigned char i = 0;
    Slot *sel = &slots[index];
    Ent *ref = sel->ent;
    float *rp = &ref->x;
    float *p;
    Ent *e;
    float dx;
    float dy;
    float dz;

    do {
        if (i != index) {
            e = slots[i].ent;
            if (e != 0) {
                p = &e->x;
                dx = e->x - ref->x;
                dy = p[1] - rp[1];
                dz = p[2] - rp[2];
                if (dx * dx + dy * dy + dz * dz <= 16.0f) {
                    count++;
                    if (count >= 2)
                        return 1;
                }
            }
        }
        i++;
    } while (i < 12);
    return 0;
}
