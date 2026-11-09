/* LEVEL_16:0x07FB80 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_094E08(Spr *s, int a);
extern void func_094B90(Spr *s, int a);
extern void func_08FBC8(int a);
extern void func_08FBE8(int a);
extern void func_08FCE8(unsigned int a);
extern void func_091878(int a);
extern void func_0916C8(int a);
extern void func_091370(int a, int b);
extern void func_0931F0(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_07FB80(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_094E08(s, 1);
    func_094B90(s, 0);
    func_08FBC8(4);
    func_08FBE8(5);
    func_08FCE8(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_091878(1);
    func_0916C8(0);
    func_091370(0, 2);
    func_0931F0(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0931F0(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0931F0(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0931F0(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_08FBC8(5);
    func_08FCE8(0xFFFFFFFF);
}
