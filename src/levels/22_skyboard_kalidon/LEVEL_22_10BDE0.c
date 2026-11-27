/* LEVEL_22:0x10BDE0 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_00166074;
extern int D_0016607C;
extern unsigned int D_00166080[1];
extern unsigned int func_0F4748(void *stream);

void func_10BDE0(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_00166080[0] = 0xFFFFFFFF;
    saved = *D_00166074;
    saved.flag = 0;
    handle = func_0F4748(D_00166074->stream);
    D_00166080[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0016607C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_00166074 = saved;
}
