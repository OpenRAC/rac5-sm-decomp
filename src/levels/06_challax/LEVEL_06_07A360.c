/* LEVEL_06:0x07A360 -- calls the routine then flags the record alive. */
typedef struct {
    char pad[0x0C];
    float f_0C;
} Sub;

extern void func_07A390(void);

void func_07A360(int a0, Sub *a1)
{
    func_07A390();
    a1->f_0C = 1.0f;
}
