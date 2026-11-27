/* LEVEL_16:0x111680 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_001B4BA4;
extern int D_001B4BAC;
extern unsigned int D_001B4BB0[1];
extern unsigned int func_0FA978(void *stream);

void func_111680(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_001B4BB0[0] = 0xFFFFFFFF;
    saved = *D_001B4BA4;
    saved.flag = 0;
    handle = func_0FA978(D_001B4BA4->stream);
    D_001B4BB0[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_001B4BAC = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_001B4BA4 = saved;
}
