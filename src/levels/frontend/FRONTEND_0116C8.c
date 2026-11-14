/* FRONTEND:0x0116C8 -- resets the draw state: sets the two fill colours, the blend state and texture clamp of the double-buffer list, then runs two follow-up calls. */
extern char db_dlist[];

extern void func_00B900(unsigned char mode);
extern void func_00BAD0(int a, int b);
extern void func_00BC68(void);
extern void func_00C050(void);
extern void func_00B8E0(int value);
extern void func_00B8F0(void *p);
extern void func_0073B8(int a, int b, int c);
extern void func_0074D8(int a, int b);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *dl, unsigned long state);
extern void dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(void *dl, int a, int b);

void func_0116C8(void)
{
    void *h;

    func_00B900(1);
    func_00BAD0(0, 0);
    func_00BC68();
    func_00C050();
    func_00B8E0(0x8000FF80);
    func_00B8F0((void *)0xFFFFFFFF);
    h = *(void **)(db_dlist + 0x54);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(h, 0x44);
    dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1(h, 0, 0);
    func_0073B8(1, 0, 5);
    func_0074D8(0, 2);
}
