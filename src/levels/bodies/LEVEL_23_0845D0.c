/* LEVEL_23:0x0845D0 -- placement copy of LEVEL_01_08E970.c: draws four offset copies of a sized sprite. */
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
extern void func_09CA08(Spr *s, int a);
extern void func_09C790(Spr *s, int a);
extern void func_097650(int a);
extern void func_097670(int a);
extern void func_097768(unsigned int a);
extern void func_099358(int a);
extern void func_0991A8(int a);
extern void func_098E50(int a, int b);
extern void func_09ADC0(short x, short y, short w, short h, float a, float b, float c, float d, unsigned int col, int z);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long long bits);

void func_0845D0(Spr *s, int unused, int off)
{
    unsigned int w;
    unsigned int h;
    unsigned long long bl;

    func_09CA08(s, 1);
    func_09C790(s, 0);
    func_097650(4);
    func_097670(5);
    func_097768(0xFFFFFFFF);
    bl = 0x8000000068ULL;
    w = s->w;
    h = s->h;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(db_dlist.pDlist, bl);
    func_099358(1);
    func_0991A8(0);
    func_098E50(0, 2);
    func_09ADC0(-off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09ADC0(off, 0, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09ADC0(0, -off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_09ADC0(0, off, w, h, 0.5f, 0.5f, (float)w, (float)h, 0xFF6F6F6F, 0);
    func_097650(5);
    func_097768(0xFFFFFFFF);
}
