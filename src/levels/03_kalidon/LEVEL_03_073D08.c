/* LEVEL_03:0x073D08 -- placement copy of LEVEL_01_073F18.c: resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_082240(void *o);
void func_0741B8(void *o);
void func_074E18(void *o);

extern unsigned char D_00073CC8[];

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

void func_073D08(struct Obj *o)
{
    unsigned int v;

    func_082240(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_0741B8(o);
    func_074E18(o);
    o->p48->pDC = D_00073CC8;
}
