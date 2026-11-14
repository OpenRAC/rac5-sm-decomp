/* USA LEVEL_09.REL:0x18B840, 188-byte candidate (14 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct V3_18B840 {
    float x;
    float y;
    float z;
};

struct V2_18B840 {
    float x;
    float z;
};

struct Rec_18B840 {
    float x;
    float z;
    char pad_08[8];
    int handle;
};

struct Obj_18B840 {
    char pad_00[0x30];
    struct V3_18B840 pos;
    char pad_3C[0x18];
    struct Rec_18B840 *rec;
};

extern void func_0818A8(int handle, struct V3_18B840 *out);
extern void func_02F540(struct Rec_18B840 *rec, struct V3_18B840 *v, int flag);

void func_18B840(struct Obj_18B840 *o)
{
    struct Rec_18B840 *r = o->rec;
    struct V3_18B840 a;
    struct V2_18B840 b;
    struct V3_18B840 *p;
    float dx;
    float dz;
    int ok;

    func_0818A8(r->handle, &a);
    func_02F540(r, &a, 0);
    p = &o->pos;
    dx = a.x - p->x;
    b.x = dx;
    dz = a.z - p->z;
    b.z = dz;
    ok = 1;
    if (!(dx * dx + dz * dz <= 25.0f)) {
        ok = 0;
    }
    if ((unsigned char)ok != 0) {
        b.x = p->x;
        b.z = p->z;
    }
    r->x = a.x;
    r->z = a.z;
}
