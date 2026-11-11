extern void *D_00000054;

extern void func_0A3480(int a);
extern void func_0A3650(int a, int b);
extern void func_0A37E8(void);
extern void func_0A3BD0(void);
extern void func_0A3460(void *a);
extern void func_0A3470(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_09C7C0(int a, int b, int c);
extern void func_09C8E0(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0A3480(1);
    func_0A3650(0, 0);
    func_0A37E8();
    func_0A3BD0();
    func_0A3460((void *)0x8000FF80);
    func_0A3470((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_09C7C0(1, 0, 5);
    func_09C8E0(0, 2);
}
