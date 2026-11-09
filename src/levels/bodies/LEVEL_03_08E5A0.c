/* LEVEL_03:0x08E5A0 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0A5A48(Spr *s, int a);
extern void func_0A57D0(Spr *s, int a);
extern void func_0A0690(int a);
extern void func_0A06B0(int a);
extern void func_0A07A8(unsigned int a);
extern void func_0A2398(int a);
extern void func_0A21E8(int a);
extern void func_0A1E90(int a, int b);
extern void func_0A3E00(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_08E5A0(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0A5A48(s, 1);
    func_0A57D0(s, 0);
    func_0A0690(4);
    func_0A06B0(5);
    func_0A07A8(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_0A2398(1);
    func_0A21E8(0);
    func_0A1E90(0, 2);
    func_0A3E00(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A3E00(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A3E00(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A3E00(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A0690(5);
    func_0A07A8(0xFFFFFFFF);
}
