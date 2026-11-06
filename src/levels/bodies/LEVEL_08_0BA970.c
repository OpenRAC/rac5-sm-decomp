extern void *D_00000054;

extern void func_0B35E8(int a);
extern void func_0B37B8(int a, int b);
extern void func_0B3950(void);
extern void func_0B3D38(void);
extern void func_0B35C8(void *a);
extern void func_0B35D8(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0AC8E8(int a, int b, int c);
extern void func_0ACA08(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0B35E8(1);
    func_0B37B8(0, 0);
    func_0B3950();
    func_0B3D38();
    func_0B35C8((void *)0x8000FF80);
    func_0B35D8((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0AC8E8(1, 0, 5);
    func_0ACA08(0, 2);
}
