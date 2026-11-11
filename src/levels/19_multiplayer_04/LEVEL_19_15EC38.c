/* LEVEL_19:0x15EC38 -- scans two entities for one within a squared distance of 25 and returns it. */
struct Ent {
    char pad_00[0x30];
    float x_30;
    char pad_34[4];
    float z_38;
    char pad_3c[0x59C - 0x3C];
    int w_59c;
};

struct Obj {
    char pad_00[0x30];
    float x_30;
    char pad_34[4];
    float z_38;
};

extern struct Ent *func_113490(int i);

struct Ent *func_15EC38(struct Obj *o)
{
    struct Ent *e;
    float *p;
    float dx;
    float dz;
    float lim;
    unsigned int i;

    lim = 25.0f;
    p = &o->x_30;
    i = 0;
    do {
        e = func_113490(i);
        if (e != 0) {
            if (e->w_59c != 0) {
                dx = o->x_30 - e->x_30;
                dz = p[2] - e->z_38;
                if (dx * dx + dz * dz < lim) {
                    return e;
                }
            }
        }
        i++;
    } while (i < 2);
    return 0;
}
