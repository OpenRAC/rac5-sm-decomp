/* LEVEL_01.REL:0x18A6B8: reviewed 340-byte candidate, held for ABI review.
 * Clears the highlight bit on two item tables and sets it on the lead item;
 * then the screen setup that calls it.
 * pinned C with gnu-ee-trial links 340/340 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_18D290 returning void with (pointer), but the accepted
 * LEVEL_01_18D290.c defines it returning void with no arguments.
 * It declares func_18D270 returning void with (int), but the accepted
 * LEVEL_01_18D270.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct ItemA18A6B8 {
    char pad_00[0x53];
    unsigned char b_53;
} ItemA18A6B8;

typedef struct ItemB18A6B8 {
    char pad_00[0x61];
    unsigned char b_61;
} ItemB18A6B8;

typedef struct Table18A6B8 {
    ItemA18A6B8 *a[16];
    ItemB18A6B8 *b[5];
    char pad_54[8];
    ItemB18A6B8 *p_5C;
    int w_60;
    int w_64;
} Table18A6B8;

typedef struct Screen18A6B8 {
    char pad_00[0x20];
    float f_20;
    char pad_24[0x30];
    Table18A6B8 *p_54;
    char pad_58[8];
    int w_60;
} Screen18A6B8;

extern int D_0021A7F0;
extern int D_00235140;

void func_083D68(ItemA18A6B8 *item);
void func_084630(ItemB18A6B8 *item);
void func_18D290(Screen18A6B8 *s);
void func_18D270(int v);
void func_16F850(int a, int b);
void func_019098(Screen18A6B8 *s, int a, int b);
void func_04BF08(int *d, Screen18A6B8 *s);
void func_0038B8(float f, float *p, int a, int b);
void func_027DE8(int a, int b, int c);
void func_07C670(Screen18A6B8 *s, int a);

void func_18A6B8(Table18A6B8 *t)
{
    unsigned int i;

    for (i = 0; i < 16; i++) {
        t->a[i]->b_53 &= 0xFE;
        func_083D68(t->a[i]);
    }
    for (i = 0; i < 5; i++) {
        t->b[i]->b_61 &= 0xFE;
        func_084630(t->b[i]);
    }
    t->p_5C->b_61 |= 1;
}

void func_18A768(Screen18A6B8 *s)
{
    Table18A6B8 *t;

    t = s->p_54;
    func_18D290(s);
    func_18D270(t->w_64);
    func_18A6B8(t);
    func_16F850(t->w_60, 0);
    func_019098(s, 0, 1);
    func_04BF08(&D_00235140, s);
    func_0038B8(1.0f, &s->f_20, 0, 3);
    func_027DE8(D_0021A7F0, s->w_60, 1);
    func_07C670(s, 1);
}
