/* FRONTEND:0x00AC18 -- fills the colour/light packet. */
struct Obj {
    unsigned int f00;
    unsigned char f04;
    unsigned char f05;
    char pad06[6];
    unsigned int f0C;
    unsigned int f10;
    unsigned char f14;
};

void func_00AC18(struct Obj *obj, unsigned int packed, unsigned char alpha,
                 unsigned char sub, unsigned char mode, unsigned char extra)
{
    unsigned char one = 1;

    obj->f14 = extra;
    obj->f10 = mode;
    obj->f00 = packed >> 24;
    obj->f0C = packed;
    obj->f04 = alpha != 0 ? alpha : one;
    obj->f05 = sub != 0 ? sub : one;
}
