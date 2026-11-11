/* LEVEL_06:0x130C58 -- placement copy of LEVEL_01_13A560.c: builds a request for the object's record id in a stack
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

extern void func_11CCE0(Buf *, int, int);
extern void func_11E568(void *, Obj *, Buf *);

void func_130C58(Obj *obj)
{
    Buf buf;
    Inner *inner = obj->inner;

    func_11CCE0(&buf, inner->id, 0);
    func_11E568(inner->sub, obj, &buf);
}
