/* LEVEL_19:0x080030 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_094698(Spr *s, int a);
extern void func_094420(Spr *s, int a);
extern void func_08F460(int a);
extern void func_08F480(int a);
extern void func_08F580(unsigned int a);
extern void func_091108(int a);
extern void func_090F58(int a);
extern void func_090C00(int a, int b);
extern void func_092A80(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_080030(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_094698(s, 1);
    func_094420(s, 0);
    func_08F460(4);
    func_08F480(5);
    func_08F580(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_091108(1);
    func_090F58(0);
    func_090C00(0, 2);
    func_092A80(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092A80(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092A80(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092A80(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_08F460(5);
    func_08F580(0xFFFFFFFF);
}
