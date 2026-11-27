/* LEVEL_23:0x126088 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001DA494;
extern int D_001DA49C;
extern unsigned int D_001DA4A0[1];
extern unsigned int func_10B7F0(void *stream);

void func_126088(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001DA4A0[0] = 0xFFFFFFFF;
    saved = *D_001DA494;
    saved.flag = 0;
    handle = func_10B7F0(D_001DA494->stream);
    D_001DA4A0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001DA49C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001DA494 = saved;
}
