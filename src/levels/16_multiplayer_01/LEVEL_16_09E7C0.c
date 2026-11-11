extern void *D_00000054;

extern void func_097370(int a);
extern void func_097540(int a, int b);
extern void func_097708(void);
extern void func_097AF0(void);
extern void func_097350(void *a);
extern void func_097360(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_091250(int a, int b, int c);
extern void func_091370(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_097370(1);
    func_097540(0, 0);
    func_097708();
    func_097AF0();
    func_097350((void *)0x8000FF80);
    func_097360((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_091250(1, 0, 5);
    func_091370(0, 2);
}
