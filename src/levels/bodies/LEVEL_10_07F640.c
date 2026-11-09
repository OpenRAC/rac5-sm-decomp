/* LEVEL_10:0x07F640 -- placement copy of LEVEL_01_07F010.c: sets display-list state through two C++ helpers, then toggles a global helper pair. */
struct DLIST07F010 {
    char pad0[0x54];
    void *f54;
};

extern struct DLIST07F010 db_dlist;
extern int D_001FF160;
extern void func_0A3108(int a, int b, int c);
extern void func_07EAF8(int a);
extern void func_07EB80(int a, int b);
extern void dlib_displist_set_blend_state(void *d, unsigned long x) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_07F640(void)
{
    void *d;

    func_0A3108(1, 0, 5);
    d = db_dlist.f54;
    dlib_displist_set_blend_state(d, 0x44);
    dlib_displist_set_tex_clamp(d, 0, 0);
    func_07EAF8(0);
    func_07EB80(D_001FF160, 1);
    func_07EAF8(1);
}
