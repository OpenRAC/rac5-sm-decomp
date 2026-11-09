/* LEVEL_01:0x073F18 -- resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_082460(void *o);
void func_0743C8(void *o);
void func_075028(void *o);

extern unsigned char D_00073ED8[];

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

void func_073F18(struct Obj *o)
{
    unsigned int v;

    func_082460(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_0743C8(o);
    func_075028(o);
    o->p48->pDC = D_00073ED8;
}
