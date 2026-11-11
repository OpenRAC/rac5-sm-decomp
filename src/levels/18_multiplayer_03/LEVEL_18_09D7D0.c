extern void *D_00000054;

extern void func_096380(int a);
extern void func_096550(int a, int b);
extern void func_096718(void);
extern void func_096B00(void);
extern void func_096360(void *a);
extern void func_096370(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_090260(int a, int b, int c);
extern void func_090380(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_096380(1);
    func_096550(0, 0);
    func_096718();
    func_096B00();
    func_096360((void *)0x8000FF80);
    func_096370((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_090260(1, 0, 5);
    func_090380(0, 2);
}
