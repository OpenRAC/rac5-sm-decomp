/* LEVEL_17:0x0725C0 -- placement copy of LEVEL_01_07F080.c: runs a setup helper, applies blend and clamp state to the display list, then runs two more helpers. */

extern char db_dlist[];
extern int D_00197794;

extern void func_090748(int a0, int a1, int a2);
extern void func_071C80(int a0);
extern void func_071D08(int a0, int a1);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *a0, unsigned int a1);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *a0, int a1, int a2);

void func_0725C0(void)
{
    int s0;

    func_090748(1, 0, 5);
    s0 = *(int *)(db_dlist + 0x54);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl((void *)s0, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1((void *)s0, 0, 0);
    func_071C80(2);
    func_071D08(D_00197794, 0);
    func_071C80(3);
}
