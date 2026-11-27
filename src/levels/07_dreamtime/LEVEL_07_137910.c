/* LEVEL_07:0x137910 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_0021B394;
extern int D_0021B39C;
extern unsigned int D_0021B3A0[1];
extern unsigned int func_11D2D8(void *stream);

void func_137910(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_0021B3A0[0] = 0xFFFFFFFF;
    saved = *D_0021B394;
    saved.flag = 0;
    handle = func_11D2D8(D_0021B394->stream);
    D_0021B3A0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0021B39C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_0021B394 = saved;
}
