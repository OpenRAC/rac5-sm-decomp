/* LEVEL_08:0x1C9C30 -- switches an object's linked record on or off: when enabled it sets up the two sub-records from global values, copies a float and picks the record flag and object state from the status word; otherwise it releases both sub-records; then runs the object update. */
struct Rec {
    char pad00[4];
    int f04;
    char f08[0x1C];
    char f24[0x18];
    float f3C;
};

struct Obj {
    char pad00[0x34];
    float f34;
    char pad38[0xD];
    unsigned char b45;
    char pad46[0xE];
    int *f54;
    struct Rec *f58;
};

extern int D_00252054;
extern int D_00252058;

extern void func_09F4F0(char *a0, int a1, int a2);
extern void func_09F668(char *record);
extern void func_21CFF0(struct Obj *o, int on);

void func_1C9C30(struct Obj *o, int on)
{
    int *status = o->f54;
    struct Rec *r = o->f58;

    if (on != 0) {
        func_09F4F0(r->f08, D_00252054, 0);
        func_09F4F0(r->f24, D_00252058, 0);
        o->f34 = r->f3C;
        if (*status != 0) {
            r->f04 = 0;
            o->b45 = 1;
        } else {
            r->f04 = 1;
            o->b45 = 0;
        }
    } else {
        func_09F668(r->f08);
        func_09F668(r->f24);
    }
    func_21CFF0(o, on);
}
