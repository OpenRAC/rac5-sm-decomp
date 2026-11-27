/* LEVEL_20:0x0E4468 -- placement copy of FRONTEND_0221D8.c: opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_00117264;
extern int D_0011726C;
extern unsigned int D_00117270[1];
extern unsigned int func_0D37D8(void *stream);

void func_0E4468(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_00117270[0] = 0xFFFFFFFF;
    saved = *D_00117264;
    saved.flag = 0;
    handle = func_0D37D8(D_00117264->stream);
    D_00117270[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_0011726C = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_00117264 = saved;
}
