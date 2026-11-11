/* LEVEL_17:0x06EBF0 -- build a record on the stack and hand it over. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 v;
    float f;
} Record;

extern void func_06EC28(void *);

void func_06EBF0(V3 *src, float f)
{
    Record rec;

    rec.v = *src;
    rec.f = f;
    func_06EC28(&rec);
}
