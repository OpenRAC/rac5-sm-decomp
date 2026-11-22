/* LEVEL_19:0x159F38 -- clears the object's state record, copies the 44-byte source record into it and runs the two setup helpers. */
extern void *memset(void *, int, unsigned int);

typedef struct {
    int w[11];
} Blk;

typedef struct {
    char pad00[0x54];
    Blk *src;
    Blk *dst;
} Obj;

extern void func_02D528(Blk *a0);
extern int func_02D588(Blk *a0, Obj *o);

void func_159F38(Obj *o)
{
    Blk *dst = o->dst;
    Blk *src = o->src;

    memset(dst, 0, 0xF0);
    *dst = *src;
    func_02D528(src);
    func_02D588(src, o);
}
