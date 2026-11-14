/* USA LEVEL_01.REL:0x08EF60 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0A0A78 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
struct DLIST08EF60 {
    char pad0[0x54];
    void *f54;
};

extern struct DLIST08EF60 db_dlist;
extern char gRT_ShadowBuffer[];
extern char *func_08E960(void);
extern void func_0A5CC8(char *b, int k);
extern void func_0A0A78(float x, int k);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_TexPerspective(float a, float b, float c, float d, float e, float f) __asm__("TexPerspective__Q34scee3Psp3Gumffffff");
extern void Gum_MultMatrix(const void *m) __asm__("MultMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void dlib_displist_set_blend_state(void *d, unsigned long x) __asm__("dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl");
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_08EF60(void *m)
{
    void *d = db_dlist.f54;

    Gum_MatrixMode(3);
    Gum_LoadIdentity();
    Gum_TexPerspective(0.7850000262260437f, 1.0f, 0.5f, -0.5f, 0.5f, 0.5f);
    Gum_MultMatrix(func_08E960());
    Gum_MultMatrix(m);
    Gum_UpdateMatrix();
    func_0A5CC8(gRT_ShadowBuffer, 1);
    func_0A0A78(0.0f, 1);
    dlib_displist_set_tex_clamp(d, 1, 1);
    dlib_displist_set_blend_state(d, 0x42);
}
