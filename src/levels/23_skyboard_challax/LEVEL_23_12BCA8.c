/* LEVEL_23:0x12BCA8 -- placement copy of LEVEL_01_13A560.c: builds the inverse of the record's matrix in a stack
   buffer and submits it to the record's sub object. */
typedef struct {
    char data[0x40];
} Buf;

typedef struct {
    char pad[0x74];
    void *mat;
    char pad78[0x30];
    char sub[4];
} Inner;

typedef struct {
    char pad[0x58];
    Inner *inner;
} Obj;

extern void func_117540(Buf *, void *, int);
extern void func_118E40(void *, Obj *, Buf *);

void func_12BCA8(Obj *obj)
{
    Buf buf;
    Inner *inner = obj->inner;

    func_117540(&buf, inner->mat, 0);
    func_118E40(inner->sub, obj, &buf);
}
