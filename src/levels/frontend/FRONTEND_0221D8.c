/* FRONTEND:0x0221D8 -- opens the current record's stream, stores the handle and marks the record on failure. */
typedef struct {
    int flag;
    int a;
    int b;
    void *stream;
    int d;
    int e;
} Rec;

extern Rec *D_0003285C;
extern int D_00032864;
extern unsigned int D_00032868[1];
extern unsigned int func_01E3C0(void *stream);

void func_0221D8(void)
{
    Rec saved;
    unsigned int handle;
    int miss;

    D_00032868[0] = 0xFFFFFFFF;
    saved = *D_0003285C;
    saved.flag = 0;
    handle = func_01E3C0(D_0003285C->stream);
    D_00032868[0] = handle;
    miss = 0;
    if (handle != 0xFFFFFFFF)
        D_00032864 = 2;
    else
        miss = 1;
    if (miss)
        saved.flag = -1;
    *D_0003285C = saved;
}
