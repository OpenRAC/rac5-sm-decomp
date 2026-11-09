/* LEVEL_04:0x06D950 -- placement copy of LEVEL_01_06BD70.c: runs a setup helper, then, while a status byte is set, runs two helpers and a final one when a second flag byte is clear and the third byte equals one. */

struct Obj {
    unsigned char pad0[0x200];
    unsigned char b200;
    unsigned char pad1[0x206 - 0x201];
    unsigned char b206;
};

void func_06DD40(struct Obj *o, unsigned int a);
void func_06EAC8(struct Obj *o);
void func_06E128(struct Obj *o, unsigned int a);
void func_06D9C8(struct Obj *o);

void func_06D950(struct Obj *o, unsigned int a1)
{
    func_06DD40(o, a1);
    if (o->b206 != 0) {
        func_06EAC8(o);
        func_06E128(o, a1);
        if (o->b200 == 0) {
            if (o->b206 == 1) {
                func_06D9C8(o);
            }
        }
    }
}
