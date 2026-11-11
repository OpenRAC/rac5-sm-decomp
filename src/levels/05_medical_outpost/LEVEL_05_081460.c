/* LEVEL_05:0x081460 -- sets up render state, draws every item of every entry whose flags match a mask, then restores state. */

typedef struct V05_081460 {
    float x;
    float y;
    float z;
    float w;
} V05_081460;

typedef struct Src05_081460 {
    char pad0[0x128];
    float f128;
    float f12C;
    float f130;
    float f134;
} Src05_081460;

typedef struct Obj05_081460 {
    char pad0[0x1C];
    Src05_081460 *src;
} Obj05_081460;

typedef struct Item05_081460 {
    char pad0[0x44];
    float f44;
    char pad48[0x14];
    int i5C;
    unsigned char b60;
    unsigned char b61;
    unsigned char b62;
    unsigned char b63;
    char data[1];
} Item05_081460;

typedef struct Ent05_081460 {
    int i0;
    unsigned int id;
    char pad8[8];
    Item05_081460 *items;
    unsigned int count;
} Ent05_081460;

typedef struct Mgr05_081460 {
    char pad0[0x24];
    Ent05_081460 *ents;
    unsigned int count;
} Mgr05_081460;

extern Mgr05_081460 *D_001F5E10;
extern void func_09EEC0(int a);
extern void func_09EEE0(int a);
extern void func_09F038(int a, int b);
extern void func_09F040(int a, int b);
extern void func_09F048(int a, int b);
extern void func_09F058(float a, float b);
extern void func_09F180(int a);
extern void func_09F178(int a);
extern void func_09F130(float a, float b);
extern void func_09F050(int a, int b, int c, int d);
extern void func_09EFC0(int a);
extern void func_0A3E18(int a);
extern Obj05_081460 *func_082BE8(unsigned int id);
extern void func_121920(V05_081460 *out, Item05_081460 *it, float *v);
extern void func_08A3F8(int a);
extern void func_08A598(V05_081460 *v, int a, int b, char *data);
extern void func_083448(Item05_081460 *it, Obj05_081460 *o, int a, int b, int c, int d, int e);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");

void func_081460(V05_081460 *a0, V05_081460 *a1, int mask) {
    V05_081460 pa;
    V05_081460 *pp;
    V05_081460 pb;
    float v[3];
    V05_081460 out;
    float d[3];
    unsigned int i;
    unsigned int j;
    int bit;
    Ent05_081460 *e;
    Item05_081460 *it;
    Obj05_081460 *o;
    Src05_081460 *s;

    pa = *a0;
    pb = *a1;
    pp = &pb;
    if (D_001F5E10 == 0) {
        return;
    }
    func_09EEC0(5);
    func_09EEC0(9);
    func_09F038(1, 1);
    func_09F040(0, 1);
    func_09F048(0, 0);
    func_09F058(16.0f, 16.0f);
    func_09EEC0(1);
    for (i = 0; i < D_001F5E10->count; i++) {
        e = &D_001F5E10->ents[i];
        if (e->id == 0xFFFFFFFF) {
            continue;
        }
        o = func_082BE8(e->id);
        it = e->items;
        s = o->src;
        for (j = 0; j < e->count; j++) {
            if ((it->b61 & 1) && (bit = 1 << it->b60, bit & mask)) {
                v[0] = s->f128 * 0.009999999776482582f;
                v[1] = s->f12C * 0.009999999776482582f;
                v[2] = s->f130 * 0.009999999776482582f;
                out.w = s->f134 * 0.009999999776482582f * it->f44;
                func_121920(&out, it, v);
                d[0] = out.x - pp->x;
                d[1] = out.y - pp->y;
                d[2] = out.z - pp->z;
                func_08A3F8(it->i5C);
                func_08A598(&out, 1, it->b62, it->data);
                func_083448(it, o, 0, it->b63 << ((it->b61 & 0x30) >> 1), 1, 1, 1);
            }
            it = (Item05_081460 *)((char *)it + (it->b62 * 8 + 0x64));
        }
    }
    func_09EEE0(4);
    func_09EEE0(9);
    func_09EEE0(10);
    func_09F180(0);
    func_0A3E18(255);
    func_09F130(0.0f, 0.0f);
    func_09EEE0(4);
    func_09EEC0(9);
    func_09EEE0(10);
    func_09F178(6);
    func_09F180(0);
    func_0A3E18(255);
    func_09F050(0, 0, 1, 0);
    Gum_MatrixMode(3);
    Gum_LoadIdentity();
    func_09F178(6);
    func_09EFC0(0xFF7F7F7F);
}
