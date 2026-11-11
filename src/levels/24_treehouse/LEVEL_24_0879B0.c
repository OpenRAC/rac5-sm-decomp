/* LEVEL_24:0x0879B0 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_09F540(Spr *s, int a);
extern void func_09F2C8(Spr *s, int a);
extern void func_09A188(int a);
extern void func_09A1A8(int a);
extern void func_09A2A0(unsigned int a);
extern void func_09BE90(int a);
extern void func_09BCE0(int a);
extern void func_09B988(int a, int b);
extern void func_09D8F8(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_0879B0(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_09F540(s, 1);
    func_09F2C8(s, 0);
    func_09A188(4);
    func_09A1A8(5);
    func_09A2A0(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_09BE90(1);
    func_09BCE0(0);
    func_09B988(0, 2);
    func_09D8F8(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09D8F8(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09D8F8(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09D8F8(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09A188(5);
    func_09A2A0(0xFFFFFFFF);
}
