/* LEVEL_22:0x07F980 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0942A8(Spr *s, int a);
extern void func_094030(Spr *s, int a);
extern void func_08EF88(int a);
extern void func_08EFA8(int a);
extern void func_08F0A0(unsigned int a);
extern void func_090C28(int a);
extern void func_090A78(int a);
extern void func_090720(int a, int b);
extern void func_092690(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_07F980(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0942A8(s, 1);
    func_094030(s, 0);
    func_08EF88(4);
    func_08EFA8(5);
    func_08F0A0(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_090C28(1);
    func_090A78(0);
    func_090720(0, 2);
    func_092690(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092690(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092690(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092690(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_08EF88(5);
    func_08F0A0(0xFFFFFFFF);
}
