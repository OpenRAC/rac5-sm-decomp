extern void *D_00000054;

extern void func_0A5F60(int a);
extern void func_0A6130(int a, int b);
extern void func_0A62C8(void);
extern void func_0A66B0(void);
extern void func_0A5F40(void *a);
extern void func_0A5F50(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_09F2A0(int a, int b, int c);
extern void func_09F3C0(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0A5F60(1);
    func_0A6130(0, 0);
    func_0A62C8();
    func_0A66B0();
    func_0A5F40((void *)0x8000FF80);
    func_0A5F50((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_09F2A0(1, 0, 5);
    func_09F3C0(0, 2);
}
