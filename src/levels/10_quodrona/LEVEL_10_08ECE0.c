/* LEVEL_10:0x08ECE0 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0A6DE0(Spr *s, int a);
extern void func_0A6B68(Spr *s, int a);
extern void func_0A1A28(int a);
extern void func_0A1A48(int a);
extern void func_0A1B40(unsigned int a);
extern void func_0A3730(int a);
extern void func_0A3580(int a);
extern void func_0A3228(int a, int b);
extern void func_0A5198(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_08ECE0(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0A6DE0(s, 1);
    func_0A6B68(s, 0);
    func_0A1A28(4);
    func_0A1A48(5);
    func_0A1B40(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_0A3730(1);
    func_0A3580(0);
    func_0A3228(0, 2);
    func_0A5198(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A5198(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A5198(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A5198(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0A1A28(5);
    func_0A1B40(0xFFFFFFFF);
}
