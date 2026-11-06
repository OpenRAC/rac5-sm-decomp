extern void *D_00000054;

extern void func_096868(int a);
extern void func_096A38(int a, int b);
extern void func_096C00(void);
extern void func_096FE8(void);
extern void func_096848(void *a);
extern void func_096858(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_090748(int a, int b, int c);
extern void func_090868(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_096868(1);
    func_096A38(0, 0);
    func_096C00();
    func_096FE8();
    func_096848((void *)0x8000FF80);
    func_096858((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_090748(1, 0, 5);
    func_090868(0, 2);
}
