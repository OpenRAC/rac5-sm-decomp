/* LEVEL_08:0x208AA8 -- placement copy of LEVEL_04_1E14D0.c: runs a probe on the sub-record at +0x18 and its fallback when the probe fails, then two helpers on the record's pointer fields. */

struct Obj {
    unsigned char pad0[0x84];
    void *f84;
    unsigned char pad1[4];
    void *f8C;
};

int func_09F6A0(unsigned char *p);
void func_09F668(unsigned char *p);
void func_209EB8(struct Obj *o);
void func_088AA8(void *p);

void func_208AA8(struct Obj *o)
{
    if (!func_09F6A0((unsigned char *)o + 0x18)) {
        func_09F668((unsigned char *)o + 0x18);
    }
    func_209EB8(o);
    func_088AA8(o->f84);
    func_088AA8(o->f8C);
}
