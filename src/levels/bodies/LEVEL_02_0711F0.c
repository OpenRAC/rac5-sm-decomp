/* LEVEL_02:0x0711F0 -- placement copy of LEVEL_01_06BD70.c: runs a setup helper, then, while a status byte is set, runs two helpers and a final one when a second flag byte is clear and the third byte equals one. */

struct Obj {
    unsigned char pad0[0x200];
    unsigned char b200;
    unsigned char pad1[0x206 - 0x201];
    unsigned char b206;
};

void func_0715E0(struct Obj *o, unsigned int a);
void func_072368(struct Obj *o);
void func_0719C8(struct Obj *o, unsigned int a);
void func_071268(struct Obj *o);

void func_0711F0(struct Obj *o, unsigned int a1)
{
    func_0715E0(o, a1);
    if (o->b206 != 0) {
        func_072368(o);
        func_0719C8(o, a1);
        if (o->b200 == 0) {
            if (o->b206 == 1) {
                func_071268(o);
            }
        }
    }
}
