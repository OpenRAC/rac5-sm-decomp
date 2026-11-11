/* LEVEL_05:0x09F4F0 -- placement copy of LEVEL_01_0A0F30.c: sets up the matrix stack and display list, then calls two helpers. */
extern void func_10B9A0(void);
extern char gMatrixStack[];
extern char db_dlist[];
extern void SetMatrixStack__Q34scee3Psp3GumP14ScePspFMatrix4UiUiUiUiUiUi(
    void *, unsigned int, unsigned int, unsigned int,
    unsigned int, unsigned int, unsigned int);
extern void dlib_displist_db_init__FP16DLIB_DISPLIST_DBi(void *, int);
extern void func_0A3E50(void);
extern void func_0A1140(void);

void func_09F4F0(void)
{
    func_10B9A0();
    SetMatrixStack__Q34scee3Psp3GumP14ScePspFMatrix4UiUiUiUiUiUi(
        gMatrixStack, 8, 8, 0x20, 8, 8, 8);
    dlib_displist_db_init__FP16DLIB_DISPLIST_DBi(db_dlist, 0);
    func_0A3E50();
    func_0A1140();
}
