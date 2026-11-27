/* LEVEL_04:0x1E77A8 -- updates the global live counter for the entity's state change and rolls its timer for states 0 and 2. */
extern int rand(void);
extern int D_0022286C;

struct Ent { char p0[0x29]; unsigned char f29; char p1[0x2C - 0x2A]; int f2C; };

void func_1E77A8(struct Ent *a0, int a1)
{
    if (a0->f29 == 0) {
        D_0022286C = D_0022286C - 1;
    }
    a0->f29 = a1;
    if (a1 == 0) {
        D_0022286C = D_0022286C + 1;
    }
    switch (a1) {
    case 2:
        a0->f2C = rand() % 9 + 6;
        break;
    case 0:
        a0->f2C = rand() % 0x96 + 0x96;
        break;
    }
}
