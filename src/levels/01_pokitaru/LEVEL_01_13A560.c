/* LEVEL_01:0x13A560 -- builds a request for the object's record id in a stack
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

extern void func_126890(Buf *, int, int);
extern void func_128118(void *, Obj *, Buf *);

void func_13A560(Obj *obj)
{
    Buf buf;
    Inner *inner = obj->inner;

    func_126890(&buf, inner->id, 0);
    func_128118(inner->sub, obj, &buf);
}
