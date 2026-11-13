/* USA LEVEL_03.REL:0x1630F0, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 152 linked bytes; first differing word +0x18.
 * Unaccepted; no matching credit. Recover the shared destroy/reset helper and block-alignment context; the scalar cleanup currently omits twelve bytes.
 */
extern int *D_20EA18;
extern void func_0975C8(int *address);
void func_1630F0(char *object)
{
    int **p = *(int ***)(object + 0x58);
    unsigned int i;
    if (*p) {
        if (*p == D_20EA18)
            D_20EA18 = 0;
        else
            func_0975C8(*p);
        *p = 0;
    }
    ++p;
    for (i = 0; i < 5; ++i, ++p) {
        if (*p) {
            if (*p == D_20EA18)
                D_20EA18 = 0;
            else
                func_0975C8(*p);
            *p = 0;
        }
    }
}
