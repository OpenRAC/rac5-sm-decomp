/* LEVEL_06:0x15E610 -- fills a 0x10-byte buffer, stamps its second word with
   the game's global float and hands it to func_15DBF0 with the two arguments. */
typedef struct {
    int i_00;
    float f_04;
    int i_08;
    int i_0C;
} Buf;

extern float D_0022219C;

extern void func_018B30(Buf *a0);
extern void func_15DBF0(int a0, int a1, Buf *a2);

void func_15E610(int a0, int a1)
{
    Buf buf;

    func_018B30(&buf);
    buf.f_04 = D_0022219C;
    func_15DBF0(a0, a1, &buf);
}
