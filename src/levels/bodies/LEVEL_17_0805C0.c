/* LEVEL_17:0x0805C0 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_094300(Spr *s, int a);
extern void func_094088(Spr *s, int a);
extern void func_08F0C0(int a);
extern void func_08F0E0(int a);
extern void func_08F1E0(unsigned int a);
extern void func_090D70(int a);
extern void func_090BC0(int a);
extern void func_090868(int a, int b);
extern void func_0926E8(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_0805C0(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_094300(s, 1);
    func_094088(s, 0);
    func_08F0C0(4);
    func_08F0E0(5);
    func_08F1E0(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_090D70(1);
    func_090BC0(0);
    func_090868(0, 2);
    func_0926E8(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0926E8(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0926E8(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0926E8(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_08F0C0(5);
    func_08F1E0(0xFFFFFFFF);
}
