/* LEVEL_15:0x0F37D8 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_0015B9F4;
extern int D_0015B9FC;
extern unsigned int D_0015BA00[1];
extern unsigned int func_0DE5E8(void *stream);

void func_0F37D8(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_0015BA00[0] = 0xFFFFFFFF;
    saved = *D_0015B9F4;
    saved.flag = 0;
    handle = func_0DE5E8(D_0015B9F4->stream);
    D_0015BA00[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0015B9FC = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_0015B9F4 = saved;
}
