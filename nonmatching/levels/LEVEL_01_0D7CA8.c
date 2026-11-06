/* LEVEL_01.REL:0x0D7CA8: Ghidra body 76 bytes.
 * Pinned pure C links 72 bytes and first differs at +28.
 * Recheck the callee return width and global comparison branch. No matching credit.
 */
extern int func_0D7920(void);
extern int D_0020673C;

int func_0D7CA8(int value)
{
    return func_0D7920() != 0 && D_0020673C == value;
}
