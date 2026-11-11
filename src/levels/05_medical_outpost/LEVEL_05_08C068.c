/* LEVEL_05:0x08C068 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
typedef struct Spr {
    char pad0[8];
    unsigned short w;
    unsigned short h;
} Spr;
typedef struct DbDlist {
    char pad0[0x54];
    void *pDlist;
} DbDlist;
extern DbDlist db_dlist;
extern void func_0A4288(Spr *s, int a);
extern void func_0A4010(Spr *s, int a);
extern void func_09EEC0(int a);
extern void func_09EEE0(int a);
extern void func_09EFD8(unsigned int a);
extern void func_0A0BD8(int a);
extern void func_0A0A28(int a);
extern void func_0A06D0(int a, int b);
extern void func_0A2640(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_08C068(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0A4288(s, 1);
    func_0A4010(s, 0);
    func_09EEC0(4);
    func_09EEE0(5);
    func_09EFD8(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_0A0BD8(1);
    func_0A0A28(0);
    func_0A06D0(0, 2);
    func_0A2640(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A2640(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A2640(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A2640(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09EEC0(5);
    func_09EFD8(0xFFFFFFFF);
}
