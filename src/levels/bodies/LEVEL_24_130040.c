/* LEVEL_24:0x130040 -- placement copy of LEVEL_01_13A560.c: builds a request for the object's record id in a stack
   buffer and submits it to the record's sub object. */
typedef struct {
    char data[0x40];
} Buf;

typedef struct {
    char pad[0x74];
    int id;
    char pad78[0x30];
    char sub[4];
} Inner;

typedef struct {
    char pad[0x58];
    Inner *inner;
} Obj;

extern void func_11C400(Buf *, int, int);
extern void func_11DC88(void *, Obj *, Buf *);

void func_130040(Obj *obj)
{
    Buf buf;
    Inner *inner = obj->inner;

    func_11C400(&buf, inner->id, 0);
    func_11DC88(inner->sub, obj, &buf);
}
