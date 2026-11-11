/* LEVEL_08:0x07B030 -- placement copy of LEVEL_01_073F18.c: resets owner status fields, runs three helpers, then publishes a local callback address. */

void func_08A400(void *o);
void func_07B4E0(void *o);
void func_07C140(void *o);

extern unsigned char D_0007AFF0[];

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

void func_07B030(struct Obj *o)
{
    unsigned int v;

    func_08A400(o);
    v = o->w64;
    v = v | 0x40;
    o->w68 = 0xFFFFFFFF;
    o->w64 = v;
    func_07B4E0(o);
    func_07C140(o);
    o->p48->pDC = D_0007AFF0;
}
