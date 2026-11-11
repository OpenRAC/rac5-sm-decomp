/* LEVEL_17:0x065600 -- placement copy of LEVEL_01_073F18.c: resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_0756A0(void *o);
void func_065A70(void *o);
void func_066720(void *o);

extern unsigned char D_000655C0[];

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

void func_065600(struct Obj *o)
{
    unsigned int v;

    func_0756A0(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_065A70(o);
    func_066720(o);
    o->p48->pDC = D_000655C0;
}
