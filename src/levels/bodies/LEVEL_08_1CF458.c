/* LEVEL_08.REL:1CF458 -- decrements the timer at 0x18 of the record held at
   0x54 and, when it has reached zero, calls func_1CFA28 with the word held
   by the record at 0x58. */
typedef struct {
    char pad_00[0x18];
    float f_18;
} Timer;

typedef struct {
    int f_00;
} Word;

typedef struct {
    char pad_00[0x54];
    Timer *f_54;
    Word *f_58;
} Obj;

extern void func_1CFA28(Obj *a0, int a1);

void func_1CF458(Obj *a0)
{
    Timer *p = a0->f_54;
    float f = p->f_18 - 1.0f;
    int word = a0->f_58->f_00;

    p->f_18 = f;
    if (f <= 0.0f) {
        func_1CFA28(a0, word);
    }
}
