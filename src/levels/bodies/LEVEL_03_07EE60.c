/* LEVEL_03:0x07EE60 -- placement copy of LEVEL_01_07F080.c: runs a setup helper, applies blend and clamp state to the display list, then runs two more helpers. */

extern char db_dlist[];
extern int D_0020E7E4;

extern void func_0A1D70(int a0, int a1, int a2);
extern void func_07E2A8(int a0);
extern void func_07E330(int a0, int a1);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *a0, unsigned int a1);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *a0, int a1, int a2);

void func_07EE60(void)
{
    int s0;

    func_0A1D70(1, 0, 5);
    s0 = *(int *)(db_dlist + 0x54);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl((void *)s0, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1((void *)s0, 0, 0);
    func_07E2A8(2);
    func_07E330(D_0020E7E4, 0);
    func_07E2A8(3);
}
