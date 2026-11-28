/* LEVEL_06:0x12AFE0 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001F5C94;
extern int D_001F5C9C;
extern unsigned int D_001F5CA0[1];
extern unsigned int func_110858(void *stream);

void func_12AFE0(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001F5CA0[0] = 0xFFFFFFFF;
    saved = *D_001F5C94;
    saved.flag = 0;
    handle = func_110858(D_001F5C94->stream);
    D_001F5CA0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001F5C9C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001F5C94 = saved;
}
