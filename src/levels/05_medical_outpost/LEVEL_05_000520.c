/* LEVEL_05.REL 0x000520 -- takes one twenty-byte record out of the level's
   table and hands two of its fields to the shared helper. */
typedef struct {
    int w[5];
} Rec;

extern Rec D_1FA400[];

extern void func_0004F8(int first, int second);

void func(int index)
{
    Rec tmp = D_1FA400[index];

    func_0004F8(tmp.w[3], tmp.w[1]);
}
