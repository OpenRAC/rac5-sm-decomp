/* LEVEL_08:0x0715B8 -- placement copy of LEVEL_01_06BD70.c: runs a setup helper, then, while a status byte is set, runs two helpers and a final one when a second flag byte is clear and the third byte equals one. */

struct Obj {
    unsigned char pad0[0x200];
    unsigned char b200;
    unsigned char pad1[0x206 - 0x201];
    unsigned char b206;
};

void func_0719A8(struct Obj *o, unsigned int a);
void func_072730(struct Obj *o);
void func_071D90(struct Obj *o, unsigned int a);
void func_071630(struct Obj *o);

void func_0715B8(struct Obj *o, unsigned int a1)
{
    func_0719A8(o, a1);
    if (o->b206 != 0) {
        func_072730(o);
        func_071D90(o, a1);
        if (o->b200 == 0) {
            if (o->b206 == 1) {
                func_071630(o);
            }
        }
    }
}
