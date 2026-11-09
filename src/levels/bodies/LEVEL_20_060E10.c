/* LEVEL_20:0x060E10 -- placement copy of LEVEL_01_07F010.c: sets display-list state through two C++ helpers, then toggles a global helper pair. */
struct DLIST07F010 {
    char pad0[0x54];
    void *f54;
};

extern struct DLIST07F010 db_dlist;
extern int D_00106870;
extern void func_07B948(int a, int b, int c);
extern void func_060540(int a);
extern void func_0605C8(int a, int b);
extern void dlib_displist_set_blend_state(void *d, unsigned long x) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_060E10(void)
{
    void *d;

    func_07B948(1, 0, 5);
    d = db_dlist.f54;
    dlib_displist_set_blend_state(d, 0x44);
    dlib_displist_set_tex_clamp(d, 0, 0);
    func_060540(0);
    func_0605C8(D_00106870, 1);
    func_060540(1);
}
