/* LEVEL_16:0x018B70 -- copies a 12-byte record from a global into the
   argument and hands the argument back. */
typedef struct {
    float f[2];
    int i;
} Record;

extern Record D_1DE8E8;

Record *func_018B70(Record *dst)
{
    *dst = D_1DE8E8;

    return dst;
}
