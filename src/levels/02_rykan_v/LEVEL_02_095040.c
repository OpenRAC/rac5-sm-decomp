/* LEVEL_02:0x095040 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0AC5D8(Spr *s, int a);
extern void func_0AC360(Spr *s, int a);
extern void func_0A7220(int a);
extern void func_0A7240(int a);
extern void func_0A7338(unsigned int a);
extern void func_0A8F28(int a);
extern void func_0A8D78(int a);
extern void func_0A8A20(int a, int b);
extern void func_0AA990(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_095040(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0AC5D8(s, 1);
    func_0AC360(s, 0);
    func_0A7220(4);
    func_0A7240(5);
    func_0A7338(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_0A8F28(1);
    func_0A8D78(0);
    func_0A8A20(0, 2);
    func_0AA990(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AA990(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AA990(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AA990(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A7220(5);
    func_0A7338(0xFFFFFFFF);
}
