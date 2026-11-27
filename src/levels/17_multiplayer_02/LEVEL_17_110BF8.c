/* LEVEL_17:0x110BF8 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001A81A4;
extern int D_001A81AC;
extern unsigned int D_001A81B0[1];
extern unsigned int func_0F9F88(void *stream);

void func_110BF8(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001A81B0[0] = 0xFFFFFFFF;
    saved = *D_001A81A4;
    saved.flag = 0;
    handle = func_0F9F88(D_001A81A4->stream);
    D_001A81B0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001A81AC = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001A81A4 = saved;
}
