extern void *D_00000054;

extern void func_081A68(int a);
extern void func_081C38(int a, int b);
extern void func_081E00(void);
extern void func_0821E8(void);
extern void func_081A48(void *a);
extern void func_081A58(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_07B948(int a, int b, int c);
extern void func_07BA68(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_081A68(1);
    func_081C38(0, 0);
    func_081E00();
    func_0821E8();
    func_081A48((void *)0x8000FF80);
    func_081A58((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_07B948(1, 0, 5);
    func_07BA68(0, 2);
}
