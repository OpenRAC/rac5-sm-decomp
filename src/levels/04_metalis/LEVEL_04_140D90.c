/* LEVEL_04:0x140D90 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_002204B4;
extern int D_002204BC;
extern unsigned int D_002204C0[1];
extern unsigned int func_1257F0(void *stream);

void func_140D90(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_002204C0[0] = 0xFFFFFFFF;
    saved = *D_002204B4;
    saved.flag = 0;
    handle = func_1257F0(D_002204B4->stream);
    D_002204C0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_002204BC = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_002204B4 = saved;
}
