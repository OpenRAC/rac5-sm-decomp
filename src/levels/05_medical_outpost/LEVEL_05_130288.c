/* LEVEL_05:0x130288 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001F6114;
extern int D_001F611C;
extern unsigned int D_001F6120[1];
extern unsigned int func_1162A8(void *stream);

void func_130288(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001F6120[0] = 0xFFFFFFFF;
    saved = *D_001F6114;
    saved.flag = 0;
    handle = func_1162A8(D_001F6114->stream);
    D_001F6120[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001F611C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001F6114 = saved;
}
