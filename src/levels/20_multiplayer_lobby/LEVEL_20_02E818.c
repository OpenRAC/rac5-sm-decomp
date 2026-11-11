/* LEVEL_20:0x02E818 -- applies a scale to the head record and, when the tail
   record is enabled, to that one too. */
typedef struct {
    char pad[0xF4];
    int fF4;
} Rec;

extern Rec D_0013BA10;
extern Rec D_0013F400;
extern void func_02E668(Rec *, float);

void func_02E818(float f12)
{
    func_02E668(&D_0013BA10, f12);
    if (D_0013F400.fF4) {
        func_02E668(&D_0013F400, f12);
    }
}
