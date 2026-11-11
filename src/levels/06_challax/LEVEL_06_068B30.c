/* LEVEL_06:0x068B30 -- placement copy of LEVEL_01_06BD70.c: runs a setup helper, then, while a status byte is set, runs two helpers and a final one when a second flag byte is clear and the third byte equals one. */

struct Obj {
    unsigned char pad0[0x200];
    unsigned char b200;
    unsigned char pad1[0x206 - 0x201];
    unsigned char b206;
};

void func_068F20(struct Obj *o, unsigned int a);
void func_069CA8(struct Obj *o);
void func_069308(struct Obj *o, unsigned int a);
void func_068BA8(struct Obj *o);

void func_068B30(struct Obj *o, unsigned int a1)
{
    func_068F20(o, a1);
    if (o->b206 != 0) {
        func_069CA8(o);
        func_069308(o, a1);
        if (o->b200 == 0) {
            if (o->b206 == 1) {
                func_068BA8(o);
            }
        }
    }
}
