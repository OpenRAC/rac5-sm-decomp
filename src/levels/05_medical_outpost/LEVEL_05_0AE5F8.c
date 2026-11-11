extern void *D_00000054;

extern void func_0A7270(int a);
extern void func_0A7440(int a, int b);
extern void func_0A75D8(void);
extern void func_0A79C0(void);
extern void func_0A7250(void *a);
extern void func_0A7260(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0A05B0(int a, int b, int c);
extern void func_0A06D0(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0A7270(1);
    func_0A7440(0, 0);
    func_0A75D8();
    func_0A79C0();
    func_0A7250((void *)0x8000FF80);
    func_0A7260((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0A05B0(1, 0, 5);
    func_0A06D0(0, 2);
}
