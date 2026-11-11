/* LEVEL_07:0x07D5A8 -- a twelve-byte vector is copied onto the stack, the
   floating argument is stored next to it, and the whole twenty-byte record
   is handed to the next function. */
typedef struct {
    int i[3];
} V12;

typedef struct {
    V12 v;
    float f;
} V16;

void func_07D5E0(V16 *record);

void func_07D5A8(V12 *src, float f)
{
    V16 record;

    record.v = *src;
    record.f = f;
    func_07D5E0(&record);
}
