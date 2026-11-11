/* LEVEL_19:0x065030 -- placement copy of LEVEL_01_073F18.c: resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_0750B8(void *o);
void func_0654A0(void *o);
void func_066150(void *o);

extern unsigned char D_00064FF0[];

struct Sub48 {
    unsigned char pad00[0xDC];
    void *pDC;
};

struct Obj {
    unsigned char pad00[0x48];
    struct Sub48 *p48;
    unsigned char pad4C[0x64 - 0x4C];
    unsigned int w64;
    unsigned int w68;
};

void func_065030(struct Obj *o)
{
    unsigned int v;

    func_0750B8(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_0654A0(o);
    func_066150(o);
    o->p48->pDC = D_00064FF0;
}
