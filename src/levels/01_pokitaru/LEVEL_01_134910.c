/* LEVEL_01:0x134910 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_00207094;
extern int D_0020709C;
extern unsigned int D_002070A0[1];
extern unsigned int func_11A288(void *stream);

void func_134910(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_002070A0[0] = 0xFFFFFFFF;
    saved = *D_00207094;
    saved.flag = 0;
    handle = func_11A288(D_00207094->stream);
    D_002070A0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0020709C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_00207094 = saved;
}
