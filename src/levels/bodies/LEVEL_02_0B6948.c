extern void *D_00000054;

extern void func_0AF5C0(int a);
extern void func_0AF790(int a, int b);
extern void func_0AF928(void);
extern void func_0AFD10(void);
extern void func_0AF5A0(void *a);
extern void func_0AF5B0(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0A8900(int a, int b, int c);
extern void func_0A8A20(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0AF5C0(1);
    func_0AF790(0, 0);
    func_0AF928();
    func_0AFD10();
    func_0AF5A0((void *)0x8000FF80);
    func_0AF5B0((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0A8900(1, 0, 5);
    func_0A8A20(0, 2);
}
