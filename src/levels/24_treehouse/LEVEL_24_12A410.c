/* LEVEL_24:0x12A410 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001D7D14;
extern int D_001D7D1C;
extern unsigned int D_001D7D20[1];
extern unsigned int func_1104F0(void *stream);

void func_12A410(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001D7D20[0] = 0xFFFFFFFF;
    saved = *D_001D7D14;
    saved.flag = 0;
    handle = func_1104F0(D_001D7D14->stream);
    D_001D7D20[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001D7D1C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001D7D14 = saved;
}
