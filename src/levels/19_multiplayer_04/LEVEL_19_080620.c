/* LEVEL_19:0x080620 -- placement copy of LEVEL_01_08EF60.c: sets up the shadow-map texture matrix (perspective, the shared matrix and the caller's matrix), then the shadow buffer helpers and the display list clamp and blend state. */
struct DLIST08EF60 {
    char pad0[0x54];
    void *f54;
};

extern struct DLIST08EF60 db_dlist;
extern char gRT_ShadowBuffer[];
extern char *func_080020(void);
extern void func_094698(char *b, int k);
extern void func_08F5D0(void);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_TexPerspective(float a, float b, float c, float d, float e, float f) __asm__("TexPerspective__Q34scee3Psp3Gumffffff");
extern void Gum_MultMatrix(const void *m) __asm__("MultMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void dlib_displist_set_blend_state(void *d, unsigned long x) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_080620(void *m)
{
    void *d = db_dlist.f54;

    Gum_MatrixMode(3);
    Gum_LoadIdentity();
    Gum_TexPerspective(0.7850000262260437f, 1.0f, 0.5f, -0.5f, 0.5f, 0.5f);
    Gum_MultMatrix(func_080020());
    Gum_MultMatrix(m);
    Gum_UpdateMatrix();
    func_094698(gRT_ShadowBuffer, 1);
    ((void (*)(float, int))func_08F5D0)(0.0f, 1);
    dlib_displist_set_tex_clamp(d, 1, 1);
    dlib_displist_set_blend_state(d, 0x42);
}
