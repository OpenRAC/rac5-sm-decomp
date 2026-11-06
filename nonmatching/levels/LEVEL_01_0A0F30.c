/* LEVEL_01.REL:0x0A0F30: Ghidra body 96 bytes.
 * Pinned pure C links 88 bytes and first differs at +16.
 * Recheck graphics setup imports and differing module call targets. No matching credit.
 */
extern void func_10F560(void);
extern void SetMatrixStack__Q34scee3Psp3GumP14ScePspFMatrix4UiUiUiUiUiUi(
    void *, int, int, int, int, int, int);
extern void dlib_displist_db_init__FP16DLIB_DISPLIST_DBi(void *, int);
extern void func_0A5890(void);
extern void func_0A2B80(void);

void func_0A0F30(void)
{
    func_10F560();
    SetMatrixStack__Q34scee3Psp3GumP14ScePspFMatrix4UiUiUiUiUiUi(
        0, 8, 8, 0x20, 8, 8, 8);
    dlib_displist_db_init__FP16DLIB_DISPLIST_DBi(0, 0);
    func_0A5890();
    func_0A2B80();
}
