/* LEVEL_20:0x07A888 -- placement copy of LEVEL_01_0A0F30.c: sets up the matrix stack and display list, then calls two helpers. */
extern void func_0CA398(void);
extern char gMatrixStack[];
extern char db_dlist[];
extern void SetMatrixStack__Q34scee3Psp3GumP14ScePspFMatrix4UiUiUiUiUiUi(
    void *, unsigned int, unsigned int, unsigned int,
    unsigned int, unsigned int, unsigned int);
extern void dlib_displist_db_init__FP16DLIB_DISPLIST_DBi(void *, int);
extern void func_07F0C8(void);
extern void func_07C4D8(void);

void func_07A888(void)
{
    func_0CA398();
    SetMatrixStack__Q34scee3Psp3GumP14ScePspFMatrix4UiUiUiUiUiUi(
        gMatrixStack, 8, 8, 0x20, 8, 8, 8);
    dlib_displist_db_init__FP16DLIB_DISPLIST_DBi(db_dlist, 0);
    func_07F0C8();
    func_07C4D8();
}
