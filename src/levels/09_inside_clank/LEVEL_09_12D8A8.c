/* LEVEL_09:0x12D8A8 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001F0B94;
extern int D_001F0B9C;
extern unsigned int D_001F0BA0[1];
extern unsigned int func_113678(void *stream);

void func_12D8A8(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001F0BA0[0] = 0xFFFFFFFF;
    saved = *D_001F0B94;
    saved.flag = 0;
    handle = func_113678(D_001F0B94->stream);
    D_001F0BA0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001F0B9C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001F0B94 = saved;
}
