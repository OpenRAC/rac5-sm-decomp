/* LEVEL_15:0x072B80 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_086590(Spr *s, int a);
extern void func_086318(Spr *s, int a);
extern void func_081270(int a);
extern void func_081290(int a);
extern void func_081388(unsigned int a);
extern void func_082F10(int a);
extern void func_082D60(int a);
extern void func_082A08(int a, int b);
extern void func_084978(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_072B80(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_086590(s, 1);
    func_086318(s, 0);
    func_081270(4);
    func_081290(5);
    func_081388(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_082F10(1);
    func_082D60(0);
    func_082A08(0, 2);
    func_084978(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_084978(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_084978(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_084978(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_081270(5);
    func_081388(0xFFFFFFFF);
}
