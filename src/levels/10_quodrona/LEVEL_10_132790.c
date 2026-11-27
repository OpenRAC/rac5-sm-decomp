/* LEVEL_10:0x132790 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_0020FCF4;
extern int D_0020FCFC;
extern unsigned int D_0020FD00[1];
extern unsigned int func_1184A0(void *stream);

void func_132790(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_0020FD00[0] = 0xFFFFFFFF;
    saved = *D_0020FCF4;
    saved.flag = 0;
    handle = func_1184A0(D_0020FCF4->stream);
    D_0020FD00[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0020FCFC = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_0020FCF4 = saved;
}
