/* LEVEL_02:0x13ACC0 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_0021C054;
extern int D_0021C05C;
extern unsigned int D_0021C060[1];
extern unsigned int func_1205D0(void *stream);

void func_13ACC0(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_0021C060[0] = 0xFFFFFFFF;
    saved = *D_0021C054;
    saved.flag = 0;
    handle = func_1205D0(D_0021C054->stream);
    D_0021C060[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0021C05C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_0021C054 = saved;
}
