/* LEVEL_08:0x145E48 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_0024FF54;
extern int D_0024FF5C;
extern unsigned int D_0024FF60[1];
extern unsigned int func_12AA28(void *stream);

void func_145E48(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_0024FF60[0] = 0xFFFFFFFF;
    saved = *D_0024FF54;
    saved.flag = 0;
    handle = func_12AA28(D_0024FF54->stream);
    D_0024FF60[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0024FF5C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_0024FF54 = saved;
}
