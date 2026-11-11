/* LEVEL_10:0x0745B8 -- placement copy of LEVEL_01_073F18.c: resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_082AC0(void *o);
void func_074A68(void *o);
void func_0756C8(void *o);

extern unsigned char D_00074578[];

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

void func_0745B8(struct Obj *o)
{
    unsigned int v;

    func_082AC0(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_074A68(o);
    func_0756C8(o);
    o->p48->pDC = D_00074578;
}
