/* LEVEL_18:0x07F4C8 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_093E18(Spr *s, int a);
extern void func_093BA0(Spr *s, int a);
extern void func_08EBE0(int a);
extern void func_08EC00(int a);
extern void func_08ED00(unsigned int a);
extern void func_090888(int a);
extern void func_0906D8(int a);
extern void func_090380(int a, int b);
extern void func_092200(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_07F4C8(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_093E18(s, 1);
    func_093BA0(s, 0);
    func_08EBE0(4);
    func_08EC00(5);
    func_08ED00(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_090888(1);
    func_0906D8(0);
    func_090380(0, 2);
    func_092200(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092200(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092200(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_092200(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_08EBE0(5);
    func_08ED00(0xFFFFFFFF);
}
