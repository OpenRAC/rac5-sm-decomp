/* LEVEL_01:0x06BD70 -- runs a setup helper, then, while a status byte is set, runs two helpers and a final one when a second flag byte is clear and the third byte equals one. */

struct Obj {
    unsigned char pad0[0x200];
    unsigned char b200;
    unsigned char pad1[0x206 - 0x201];
    unsigned char b206;
};

void func_06C160(struct Obj *o, unsigned int a);
void func_06CEE8(struct Obj *o);
void func_06C548(struct Obj *o, unsigned int a);
void func_06BDE8(struct Obj *o);

void func_06BD70(struct Obj *o, unsigned int a1)
{
    func_06C160(o, a1);
    if (o->b206 != 0) {
        func_06CEE8(o);
        func_06C548(o, a1);
        if (o->b200 == 0) {
            if (o->b206 == 1) {
                func_06BDE8(o);
            }
        }
    }
}
