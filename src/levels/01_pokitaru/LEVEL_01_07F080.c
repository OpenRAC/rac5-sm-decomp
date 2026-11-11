/* LEVEL_01:0x07F080 -- runs a setup helper, applies blend and clamp state to the display list, then runs two more helpers. */

extern char db_dlist[];
extern int D_001F6164;

extern void func_0A1FF0(int a0, int a1, int a2);
extern void func_07E4C8(int a0);
extern void func_07E550(int a0, int a1);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *a0, unsigned int a1);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *a0, int a1, int a2);

void func_07F080(void)
{
    int s0;

    func_0A1FF0(1, 0, 5);
    s0 = *(int *)(db_dlist + 0x54);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl((void *)s0, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1((void *)s0, 0, 0);
    func_07E4C8(2);
    func_07E550(D_001F6164, 0);
    func_07E4C8(3);
}
