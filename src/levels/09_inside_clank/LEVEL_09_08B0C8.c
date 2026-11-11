/* LEVEL_09:0x08B0C8 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0A2F78(Spr *s, int a);
extern void func_0A2D00(Spr *s, int a);
extern void func_09DBC0(int a);
extern void func_09DBE0(int a);
extern void func_09DCD8(unsigned int a);
extern void func_09F8C8(int a);
extern void func_09F718(int a);
extern void func_09F3C0(int a, int b);
extern void func_0A1330(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_08B0C8(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0A2F78(s, 1);
    func_0A2D00(s, 0);
    func_09DBC0(4);
    func_09DBE0(5);
    func_09DCD8(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_09F8C8(1);
    func_09F718(0);
    func_09F3C0(0, 2);
    func_0A1330(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A1330(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A1330(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A1330(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09DBC0(5);
    func_09DCD8(0xFFFFFFFF);
}
