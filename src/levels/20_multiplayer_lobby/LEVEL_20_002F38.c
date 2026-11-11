/* LEVEL_20:0x002F38 -- copies a 12-byte record into a global object.
   The destination record lives at offset 0x1D8 of the object the global
   pointer points to; the source comes in as the argument. */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    int pad[118];
    Record rec;
} Holder;

extern Holder *D_00FD3C4;

void func_002F38(Record *src)
{
    D_00FD3C4->rec = *src;
}
