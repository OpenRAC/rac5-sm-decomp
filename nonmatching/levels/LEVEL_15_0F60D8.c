/* LEVEL_15.REL:0x0F60D8: reviewed 72-byte candidate, held for ABI review.
 * Allocates a twelve-byte handler record of kind 4 and installs its callback.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_0D4FE0 returning pointer with (int, int, pointer, int), but
 * the accepted LEVEL_15_0D4FE0.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int pad0;
    int kind;
    void (*callback)(void);
} Handler;

extern char D_0016F170[];
extern Handler *func_0D4FE0(int size, int flags, const char *file, int line);
extern void func_0F6088(void);

Handler *func_0F60D8(void)
{
    Handler *handler = func_0D4FE0(sizeof(Handler), 0, D_0016F170, 0x42F);

    handler->kind = 4;
    handler->callback = func_0F6088;
    return handler;
}
