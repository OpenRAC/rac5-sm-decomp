/* LEVEL_04:0x1E14D0 -- runs a probe on the sub-record at +0x18 and its fallback when the probe fails, then two helpers on the record's pointer fields. */

struct Obj {
    unsigned char pad0[0x84];
    void *f84;
    unsigned char pad1[4];
    void *f8C;
};

int func_09A750(unsigned char *p);
void func_09A718(unsigned char *p);
void func_1E28E0(struct Obj *o);
void func_083F98(void *p);

void func_1E14D0(struct Obj *o)
{
    if (!func_09A750((unsigned char *)o + 0x18)) {
        func_09A718((unsigned char *)o + 0x18);
    }
    func_1E28E0(o);
    func_083F98(o->f84);
    func_083F98(o->f8C);
}
