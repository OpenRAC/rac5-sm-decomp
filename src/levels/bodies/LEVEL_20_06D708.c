/* LEVEL_20:0x06D708 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_07F500(Spr *s, int a);
extern void func_07F288(Spr *s, int a);
extern void func_07A2C8(int a);
extern void func_07A2E8(int a);
extern void func_07A3E8(unsigned int a);
extern void func_07BF70(int a);
extern void func_07BDC0(int a);
extern void func_07BA68(int a, int b);
extern void func_07D8E8(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_06D708(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_07F500(s, 1);
    func_07F288(s, 0);
    func_07A2C8(4);
    func_07A2E8(5);
    func_07A3E8(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_07BF70(1);
    func_07BDC0(0);
    func_07BA68(0, 2);
    func_07D8E8(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_07D8E8(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_07D8E8(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_07D8E8(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_07A2C8(5);
    func_07A3E8(0xFFFFFFFF);
}
