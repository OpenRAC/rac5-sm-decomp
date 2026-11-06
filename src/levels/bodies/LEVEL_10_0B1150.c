extern void *D_00000054;

extern void func_0A9DC8(int a);
extern void func_0A9F98(int a, int b);
extern void func_0AA130(void);
extern void func_0AA518(void);
extern void func_0A9DA8(void *a);
extern void func_0A9DB8(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_0A3108(int a, int b, int c);
extern void func_0A3228(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_0A9DC8(1);
    func_0A9F98(0, 0);
    func_0AA130();
    func_0AA518();
    func_0A9DA8((void *)0x8000FF80);
    func_0A9DB8((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0A3108(1, 0, 5);
    func_0A3228(0, 2);
}
