/* LEVEL_02:0x07A800 -- placement copy of LEVEL_01_073F18.c: resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_088CE0(void *o);
void func_07ACB0(void *o);
void func_07B910(void *o);

extern unsigned char D_0007A7C0[];

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

void func_07A800(struct Obj *o)
{
    unsigned int v;

    func_088CE0(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_07ACB0(o);
    func_07B910(o);
    o->p48->pDC = D_0007A7C0;
}
