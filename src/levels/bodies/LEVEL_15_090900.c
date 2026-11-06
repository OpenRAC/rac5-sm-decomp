extern void *D_00000054;

extern void func_089578(int a);
extern void func_089748(int a, int b);
extern void func_0898E0(void);
extern void func_089CC8(void);
extern void func_089558(void *a);
extern void func_089568(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0828E8(int a, int b, int c);
extern void func_082A08(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_089578(1);
    func_089748(0, 0);
    func_0898E0();
    func_089CC8();
    func_089558((void *)0x8000FF80);
    func_089568((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0828E8(1, 0, 5);
    func_082A08(0, 2);
}
