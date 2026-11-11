/* LEVEL_15:0x0F60D8 -- allocates a twelve-byte handler record of kind 4 and
   installs its callback. */
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
