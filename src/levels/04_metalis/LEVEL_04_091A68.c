/* LEVEL_04:0x091A68 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0AAED8(Spr *s, int a);
extern void func_0AAC60(Spr *s, int a);
extern void func_0A5B20(int a);
extern void func_0A5B40(int a);
extern void func_0A5C38(unsigned int a);
extern void func_0A7828(int a);
extern void func_0A7678(int a);
extern void func_0A7320(int a, int b);
extern void func_0A9290(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_091A68(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0AAED8(s, 1);
    func_0AAC60(s, 0);
    func_0A5B20(4);
    func_0A5B40(5);
    func_0A5C38(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_0A7828(1);
    func_0A7678(0);
    func_0A7320(0, 2);
    func_0A9290(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A9290(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A9290(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A9290(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A5B20(5);
    func_0A5C38(0xFFFFFFFF);
}
