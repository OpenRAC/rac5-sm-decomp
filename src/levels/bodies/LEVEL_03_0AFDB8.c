extern void *D_00000054;

extern void func_0A8A30(int a);
extern void func_0A8C00(int a, int b);
extern void func_0A8D98(void);
extern void func_0A9180(void);
extern void func_0A8A10(void *a);
extern void func_0A8A20(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0A1D70(int a, int b, int c);
extern void func_0A1E90(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0A8A30(1);
    func_0A8C00(0, 0);
    func_0A8D98();
    func_0A9180();
    func_0A8A10((void *)0x8000FF80);
    func_0A8A20((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0A1D70(1, 0, 5);
    func_0A1E90(0, 2);
}
