extern void *D_00000054;

extern void func_0AACB0(int a);
extern void func_0AAE80(int a, int b);
extern void func_0AB018(void);
extern void func_0AB400(void);
extern void func_0AAC90(void *a);
extern void func_0AACA0(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0A3FF0(int a, int b, int c);
extern void func_0A4110(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0AACB0(1);
    func_0AAE80(0, 0);
    func_0AB018();
    func_0AB400();
    func_0AAC90((void *)0x8000FF80);
    func_0AACA0((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0A3FF0(1, 0, 5);
    func_0A4110(0, 2);
}
