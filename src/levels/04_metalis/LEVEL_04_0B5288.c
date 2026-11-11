extern void *D_00000054;

extern void func_0ADF00(int a);
extern void func_0AE0D0(int a, int b);
extern void func_0AE268(void);
extern void func_0AE650(void);
extern void func_0ADEE0(void *a);
extern void func_0ADEF0(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0A7200(int a, int b, int c);
extern void func_0A7320(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0ADF00(1);
    func_0AE0D0(0, 0);
    func_0AE268();
    func_0AE650();
    func_0ADEE0((void *)0x8000FF80);
    func_0ADEF0((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0A7200(1, 0, 5);
    func_0A7320(0, 2);
}
