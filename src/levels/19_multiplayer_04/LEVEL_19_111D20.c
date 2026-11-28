/* LEVEL_19:0x111D20 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001B5D24;
extern int D_001B5D2C;
extern unsigned int D_001B5D30[1];
extern unsigned int func_0FABA0(void *stream);

void func_111D20(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001B5D30[0] = 0xFFFFFFFF;
    saved = *D_001B5D24;
    saved.flag = 0;
    handle = func_0FABA0(D_001B5D24->stream);
    D_001B5D30[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001B5D2C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001B5D24 = saved;
}
