/* LEVEL_01.REL:0x04BC60: Ghidra body 96 bytes.
 * Pinned pure C links 100 bytes and first differs at +28.
 * Recheck indirect callback target and global guard. No matching credit.
 */
extern char D_00235140[];
extern char *D_00235F14;
extern void *func_06AB80(void *);
extern void func_06ABB8(void *);

void func_04BC60(void)
{
    if (func_06AB80(D_00235140) == 0) {
        char *record = D_00235F14;
        if (record != 0) {
            void (*callback)(void *) = *(void (**)(void *))(record + 0x0c);
            if (callback != 0) {
                callback(D_00235140);
            }
        }
    } else {
        func_06ABB8(D_00235140);
    }
}
