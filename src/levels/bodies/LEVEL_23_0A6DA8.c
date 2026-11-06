extern void *D_00000054;

extern void func_09FA20(int a);
extern void func_09FBF0(int a, int b);
extern void func_09FD88(void);
extern void func_0A0170(void);
extern void func_09FA00(void *a);
extern void func_09FA10(void *a);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);
extern void func_098D30(int a, int b, int c);
extern void func_098E50(int a, int b);

void func_0B0038(void)
{
    void *h;

    func_09FA20(1);
    func_09FBF0(0, 0);
    func_09FD88();
    func_0A0170();
    func_09FA00((void *)0x8000FF80);
    func_09FA10((void *)0xFFFFFFFF);
    h = D_00000054;
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_098D30(1, 0, 5);
    func_098E50(0, 2);
}
