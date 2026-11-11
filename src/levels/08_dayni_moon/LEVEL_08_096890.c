/* LEVEL_08:0x096890 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_0B05C0(Spr *s, int a);
extern void func_0B0348(Spr *s, int a);
extern void func_0AB208(int a);
extern void func_0AB228(int a);
extern void func_0AB320(unsigned int a);
extern void func_0ACF10(int a);
extern void func_0ACD60(int a);
extern void func_0ACA08(int a, int b);
extern void func_0AE978(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_096890(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_0B05C0(s, 1);
    func_0B0348(s, 0);
    func_0AB208(4);
    func_0AB228(5);
    func_0AB320(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_0ACF10(1);
    func_0ACD60(0);
    func_0ACA08(0, 2);
    func_0AE978(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AE978(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AE978(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AE978(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_0AB208(5);
    func_0AB320(0xFFFFFFFF);
}
