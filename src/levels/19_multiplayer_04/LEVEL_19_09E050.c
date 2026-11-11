extern void *D_00000054;

extern void func_096C00(int a);
extern void func_096DD0(int a, int b);
extern void func_096F98(void);
extern void func_097380(void);
extern void func_096BE0(void *a);
extern void func_096BF0(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_090AE0(int a, int b, int c);
extern void func_090C00(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_096C00(1);
    func_096DD0(0, 0);
    func_096F98();
    func_097380();
    func_096BE0((void *)0x8000FF80);
    func_096BF0((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_090AE0(1, 0, 5);
    func_090C00(0, 2);
}
